#include <stdio.h>
#include <stdlib.h>

int main()
{
   char message[100];
   char ch;
   int key;
   int i;

   //start of program
   printf("***********************PLAIN TEXT*********************************\n");
   printf("\n");
   printf("Enter plain text to encrypt: ");
   gets(message);

   printf("\n");
   printf("****************************KEY************************************\n");
   printf("\n");
   printf("Enter a key: ");
   scanf("%d", &key);

   //the program goes through the plain text
   for(i = 0 ; message[i] != '\0' ; i++){
    ch= message[i];
    //for lowercase letters
    if(ch >= 'a' && ch <= 'z'){
        ch= ch + key;
        if(ch > 'z'){
            ch = ch - 'z' + 'a' - 1;
        }
        message[i]=ch;
    }
    //for uppercase letters
    else if(ch >= 'A' && ch <= 'Z'){
        ch = ch + key;
        if(ch > 'Z'){
             ch = ch - 'Z' + 'A' - 1;
        }
        message[i] = ch;
    }
   }
   printf("\n");
   printf("\n");
   printf("****************************ENCRYPTED MESSAGE***************************'\n");
   printf("\n");
   printf("Encrypted message: %s",message);
   printf("\n");
   printf("\n");
    printf("***************************END OF ENCRYPTION**********************************'\n");
return 0;
}
