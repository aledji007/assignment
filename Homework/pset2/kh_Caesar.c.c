#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, string argv[])

{
    if(argc==2){
        int k=atoi(argv[1]);
        string plain = get_string("plaintext : ");

        if(k<=0){
            printf("invalid");
            return 0;
        }
        for(int i=0;i<(strlen(plain));i++){
             if(isalpha(plain[i])){
                 if(isupper(plain[i])){
                     printf("%c",(((plain[i]-65)+ k)%26)+ 65);
                 }if(islower(plain[i])){
                     printf("%c",(((plain[i]-97)+ k)%26)+ 97);
                 }
             }else{
                 printf("%c",plain[i]);
             }
        }
    }else{
        printf("is invalid");
        return 0;
    }
}








































































