#include<stdio.h>

int main()
{
	int i,sum=0;
	
	for(i=1;i<=5;i++)
	{
		printf("%d ",i);
		sum=sum+i;
	}
	printf("total sum:%d",sum);
	
}


/* output:1 2 3 4 5 total sum:15
*/