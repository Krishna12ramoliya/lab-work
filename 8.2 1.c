#include<stdio.h>

int main()
{
	int arr[3][3];
	float avg,sum=0;
	
	for( int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
			sum+=arr[i][j];
		}
		
	}
	avg=sum/9;
	printf("avg:%f",avg);
}
/*
arr[0][0]:2
arr[0][1]:4
arr[0][2]:1
arr[1][0]:3
arr[1][1]:5
arr[1][2]:4
arr[2][0]:8
arr[2][1]:2
arr[2][2]:6
avg:3.888889
------------------------



*/