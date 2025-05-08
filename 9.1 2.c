#include<stdio.h>

int main()
{
	int i;
	char arr[]="HELLOWORLD";
	for(i=0;i<11;i++){
		printf("%c",arr[i]);
	}
	printf("\n");
	for(i=0;i<11;i++)
	{
		arr[i]=arr[i]+32;
		printf("%c",arr[i]);
	}
}
/*
HELLOWORLD
helloworld

*/