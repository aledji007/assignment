#include<cs50.h>
#include<string.h>
#include<stdio.h>


int main(void)
{
    long long number;

    int count=0;

    do{

         number=get_long_long("please your card number");
    }

    while(number<0);

    long long cc=number;
    while(cc>0)

    {
        cc=cc/10;
        count++;
    }

      if(count!=13 && count!=15 && count!=16 )

    {
        printf("this is an invalid card number");
    }

    cc=number;
    int sum=0;

    for(int i=1;i<=count;i++)
  {
      int digit=cc%10;

      if(i%2==0){



         digit=digit*2;
     }

     if(i%2!=0)
     {
         digit=digit*1;
     }

    if(digit>9)
    {
        digit=digit-9;
    }

    sum=sum+digit;

    cc=cc/10;
  }


        if(sum%10!=0)
        {


    printf("invalid card");

}
   else
   {
       printf("this card is valid");
   }

    cc=number;

    while(cc>100)
    {
        cc=cc/10;
    }
      int first=cc;
      if((first=34||first==37)&&(count==15)&&(sum%10==0))
    {
        printf("amex");
    }

    else if((first>50 && first<56 && count==16 )&&( sum%10==0))

    {
        printf("from master card");
    }

      else if((first/10==4)&&(count==13||count==16)&&(sum%10==0))
    {
        printf("from visa");
    }

    else
    {
        printf("card number from another bank");
    }

}
