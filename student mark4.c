#include <stdio.h>

int main()
{
	float marks;
	
	printf("marks for student:");
	scanf("%f",&marks);
	
	if(marks>75){
	
	printf("grade a");
      }
      else if (60<marks<75)
      {
      	printf("grade b");
	  }
	  else if (45<marks<60)
	  {
	  	printf("grade c");
	  }
	  else if (35<marks<45)
	  {
	  	printf("grade d");
	  }
	  else 
	   {
		 
		printf("fail");
       }
	    
}