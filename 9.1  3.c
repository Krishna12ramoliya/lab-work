#include<stdio.h>

int main()
{
	int i;
	char arr[]={ 'H','e','l','L','o','w','o','r','L','D'};
	for(i=0;i<10;i++){
		printf("%c",arr[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		if (arr[i]>'A'&& arr[i]<'Z')
		{
			arr[i]=arr[i]+32;
		printf("%c",arr[i]);
		}
		else
		{
			arr[i]=arr[i]-32;
		printf("%c",arr[i]);
			}	
		
}
}
/*
HelLoworLD
hELlOWORld

*/