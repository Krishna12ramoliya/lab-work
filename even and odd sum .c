#include<stdio.h>

int main()
{
	int n,i;
	printf("enter array size:");
	scanf("%d",&n);
	
	int arr[n],evensum=0,oddsum=0;
	
	for(int i=0;i<n;i++)
	{
		printf("enter arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	  
	  for (int i=0;i<n;i++)
	  {
	  	if(arr[i]%2==0)
	  	{
	  		evensum+=arr[i];
		  }else if (arr[i]%2!=0){
		  	oddsum+=arr[i];
		  }
	  }
	  printf("total even sum is :%d",evensum);
	  printf("total odd  sum is :%d",oddsum);
	
}
/*

enter array size:5
enter arr[0]11
enter arr[1]12
enter arr[2]13
enter arr[3]14
enter arr[4]15
total even sum is :26total odd  sum is :39

*/