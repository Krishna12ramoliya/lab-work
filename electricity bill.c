#include <stdio.h>

int main()
{
      float units,bill=0;
      printf("enter the number of units consumed:");
      scanf("%f",&units);
      
      if ( units<=100){
      	bill=units*0.60;
	  } else if (units<=300){
	  	bill=100*0.60+(units-100)*0.80;
	  }else{
	  	bill=100*0.60+200*0.80+(units-300*0.90);
	  }
	  
	  if(bill<50){
	  	bill+50;
	  }
	  
	  
	  if(bill<50){
	  	bill=bill+bill*0.15;
	  }
	  
	  printf("total electricity bill:Rs.%2f\n",bill);
	  
}
