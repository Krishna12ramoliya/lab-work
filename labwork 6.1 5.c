#include<stdio.h>

int main()
{
	int s,e;
	
	printf("enter is :s");
	scanf("%d",&s);
	
	printf("enter is e:");
	scanf("%d",&e);
	
	while(s<=e)
	{
		printf("%d",s);
		s+=4;
	
	}
}