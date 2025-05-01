#include<stdio.h>

int main()
{
	int arr[5];
	int length= sizeof(arr)/sizeof (arr[0]);
	
	for(int i=0;i<5;i++) 
	{
		printf("enter element arr[%d]:",i);
		scanf("%d",& arr[i]);
	}
	
      for(int i=0;i<5;i++)
      {
      	printf("element arr[%d]: %d\n",i,arr[i]);
	  }
	  printf("length of an arry : %d\n",length);
}
	

/* 
enter element arr[0]:3
enter element arr[1]:7
enter element arr[2]:1
enter element arr[3]:8
enter element arr[4]:6
element arr[0]: 3
element arr[1]: 7
element arr[2]: 1
element arr[3]: 8
element arr[4]: 6
length of an arry : 5






*/