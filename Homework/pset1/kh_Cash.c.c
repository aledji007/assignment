#include<stdio.h>
#include<cs50.h>

int main(void)

{
    int a= 500;
    int b= 250;
    int c= 200;
    int d= 100;
    int e= 50;
    int f= 25;
    int g= 10;
    int h= 5;
    int i= 1;
    int compter=0;
    int montant;

    do
    {
        montant= get_int("montant:");
    }
        while(montant<0);


       while(montant>=a)
    {
        montant=montant-a;
        compter++;
    }
       while(montant>=b)

    {

        montant=montant-b;
        compter++;
    }

      while(montant>=c)
      {
          montant=montant-c;
          compter++;
      }
      while(montant>=d)
      {
          montant=montant-d;
          compter++;
      }

      while(montant>=e)
      {
          montant=montant-e;
          compter++;
      }
       while(montant>=f)
       {
           montant=montant-f;
           compter++;
       }
        while(montant>=g)
        {

            montant=montant-g;
            compter++;
        }
         while(montant>=h)
        {
            montant=montant-h;
            compter++;
        }
        while(montant>=i)
        {
            montant=montant-i;
            compter++;
        }

          printf("nombre de pieces utilisees %i",compter);






}