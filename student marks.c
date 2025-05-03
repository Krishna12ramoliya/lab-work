#include <stdio.h>

int main()
{
	int maths[2],sci[2],eng[2],total;
	float per;
	char grade;
	
	for(int i=0;i<2;i++)
	{
		printf("enter maths marks[%d]:",i);
		scanf("%d",&maths[i]);
	}
	printf("\n");
	
		for(int i=0;i<2;i++)
	{
		printf("enter sci marks[%d]:",i);
		scanf("%d",&sci[i]);
	}
	printf("\n");
	
		for(int i=0;i<2;i++)
	{
		printf("enter eng marks[%d]:",i);
		scanf("%d",&eng [i]);
	}
	printf("\n");
	
	
		printf(" \n\nmaths\tsci\teng\ttotal\tper\tgrade");
		printf("\n--------------------------------------");
		for(int i=0;i<2;i++)
		{
			total=maths[i]+sci[i]+eng[i];
			per=(float)total/3;
			printf("\n%d\t%d\t%d\t%d\t%c%.2f\t",maths[i],sci[i],eng[i],grade,total,per);
			if(per>=90){
				printf("A");
			}else if(per>=80){
				printf("B");
			}else if(per>=70){
				printf("C");
			}else if (per>=60){
				printf("D");
			}else if(per>=50){
				printf("E");
			}else if(per>=40){
				printf("F");
			}else if (per>=30){
				printf("you are failed!");
			}
		}
	
	
	
	
	
	
}