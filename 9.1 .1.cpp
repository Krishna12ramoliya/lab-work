#include<stdio.h>

int main()
{
    char arr[]={ 'h','e','l','l','o',' ','w','o','r','l','d'};
     int i;
    for(int i=0;i<11;i++)
   {
   	printf("%c",arr[i]);
	}
      
   }
    
  

   


   char s[100];
   int i;

   printf ("\nEnter a string : ");
   gets(s);

   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'A' && s[i] <= 'Z') {
         s[i] = s[i] + 32;
      }
   }

   printf("\nString in Lower Case = %s", s);