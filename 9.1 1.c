#include<stdio.h>

int main()
{
	int i;
	char arr[]={ 'h','e','l','l','o',' ','w','o','r','l','d'};
	for(i=0;i<11;i++){
		printf("%c",arr[i]);
	}
	printf("\n");
	for(i=0;i<11;i++)
	{
		arr[i]=arr[i]-32;
		printf("%c",arr[i]);
	}
}
/*
hello world
HELLO WORLD


*/