#include<stdio.h>
 
 int main()
 {
 	int s,e;
 	
 	printf("enter is s:");
 	scanf("%d",&s);
 	
 	printf("enter is e:");
 	scanf("%d",&e);
 	
 	while(s<=e)
 	{
 		printf("%d  ",s);
 		s+=4;
 	
 	}

} 	

/* output: enter is s: 2020
           enter is e: 2040
          2020  2024  2028  2032  2036  2040
		  
*/		  
		     