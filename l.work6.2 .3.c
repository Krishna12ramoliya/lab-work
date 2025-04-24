#include<stdio.h>

int main()
{
	int i,n;
	i=2;
	 printf("enter is n:");
	 scanf("%d",&n);
	 
	 do{
	 	printf("%d ",i);
	 	i+=2;
	 }while(i<=n);
}