#include<stdio.h>

int main()
{
	int arr[5]={2,4,1,3,7};
	int i=0;
	
	printf("Arraym element :\n");
	for(i=0;i<5;i++)
	printf("%d ",arr[i]);
	
	printf("\nsqare of array elements :\n");
	for(i=0;i<5;i++)
	
		printf("%d ",arr[i]*arr[i]);
		
	printf("\n");
	return 0;
	
}/*
Arraym element :
2 4 1 3 7
sqare of array elements :
4 16 1 9 49
*/