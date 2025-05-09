#include<stdio.h>
#include<string.h>

int main()
{
	int a=0,b=0,c=0;
	char arr1[99]="admin@gmail.com";
    char arr2[99]="1234567";
	printf("%s",arr1);
	printf("%s",arr2);
	printf("\n");
	
	char arr3[99];
	{
		printf("enter your email:");
		gets (arr3);
	}
	char arr4[99];
	{
		printf("enter your password:");
		gets(arr4);
	}
	
	int strcmp(arr1,arr3);
	printf("%d",strcmp(arr1,arr3));
		int strcmp(arr2,arr4);
	printf("%d",strcmp(arr2,arr4));
	
	if(strcmp(arr1,arr3)==0 && strcmp(arr2,arr4)==0)
	{
		printf("login successful.");
	}else
	{
		printf("login failed,invalid credantials.");
	}
		
	
}/*
admin@gmail.com1234567
enter your email:admin@gmail.com
enter your password:1234567
00login successful.

admin@gmail.com1234567
enter your email:admin@gmail.com
enter your password:1234567
00login successful.
*/
	