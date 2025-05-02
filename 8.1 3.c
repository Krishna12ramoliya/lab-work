#include <stdio.h>
 
int main()
{
	int arr1[5]={7,4,9,5,2};
    int arr2[5]={1,3,1,7,3};
	int arr3[5];
	
	for (int i=0;i<5;i++){
		arr3[i]=arr1[i]+arr2[i];
	}
	   printf("sum of array:");
	   for (int i=0;i<5;i++)
	   {
	   	printf("%d",arr3[i]);
	   }
	   printf("\n");
}
	  