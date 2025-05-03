#include<stdio.h>

int main()
{
	int arr1[3][3],total,i,j;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}printf("\n");
	  int arr2[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++){
			printf("b[%d][%d]:",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}printf("\n");
	total =arr1[i][j]+arr2[i][j];
	printf("total [%d]:",total);
}