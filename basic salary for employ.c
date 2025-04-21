#include <stdio.h>

int main()
{
	float basicsalary,HRA,DA,grosssalary;
	
	printf("enter basicsalary of emplyee");
	scanf("%f",&basicsalary);
	
	if(basicsalary<=5000)
	{
		HRA=0.08*basicsalary;
		DA=0.20*basicsalary;
	}
	else if(basicsalary<=10000)
	{
		HRA=0.12*basicsalary;
		DA=0.30*basicsalary;
	}
    else if (basicsalary<=15000)
    {
	
		HRA=0.15*basicsalary;
		DA=0.40*basicsalary;
	}
	else
	{
	HRA=0.20*basicsalary;
	DA=0.50*basicsalary;
	}
	grosssalary=basicsalary+HRA+DA;
	printf("grosssalary:%f\n",grosssalary);
}