#include<stdio.h>

int main()
{
    int arr[100];
	int i=0;
	for(int i=0;i<5;i++) 
	{
		printf("enter element arr[%d]:",i);
		scanf("%d",& arr[i]);
	}

	
	printf("\nreversed array elements :\n");
	for(i=4;i>=0;i--)
	{
	
		printf("%d ",arr[i]*arr[i]);
    }
	printf("\n");
	return 0;
	
}
/*
enter element arr[0]:5
enter element arr[1]:9
enter element arr[2]:4
enter element arr[3]:7
enter element arr[4]:3

reversed array elements :
9 49 16 81 25

--------------------------------
*/