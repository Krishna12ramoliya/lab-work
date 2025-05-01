

#include<stdio.h>

int main() 
{
	
     int arr[] = {12,42,18,50,26};
    float sum=0, average;
    
    for(int i=0;i<5;i++)
	{
        sum += arr[i];
    }
    
    average = sum/5;
    printf("The average of given numbers : %f", average);

    
}
/*





*/