#include<stdio.h>
int main()
{
	int i,multi=1;
	
	for(i=1;i<=5;i++)
	{
		printf("%d \n",i);
		multi=multi*i;
	
	
	}
	printf("the factoril is: %d",multi);
}
/* output:
1
2
3
4
5
the factoril is: 120
*/