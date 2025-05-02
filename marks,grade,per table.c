#include <stdio.h>

int main()
{
	int  i,j,k,l,maths,eng,hindi;
	
	int arr1[5];
	for (i=0;i<5;i++)
	{
	printf("enter of sub maths:");
	scanf("%d",&maths);
    }
    
    int arr2[5];
    for (j=0;j<5;j++)
    {
	printf("enter of sub eng:");
	scanf("%d",&eng);
    }
    
    int arr3[5];
    for (k=0;k<5;k++)
    {
	printf("enter of sub hindi:");
	scanf("%d",&hindi);
	}
	
	int arr4[5];
	for (l=0;l<5;l++)
	{
		arr4[l]=arr1[i]+arr2[j]+arr3[k];
	}
	printf("sum of array:");
	for( l=0;l<5;l++)
	{
		printf("%d",arr4[l]);
	}
}