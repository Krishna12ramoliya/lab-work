#include <stdio.h>

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() 
{
	
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("Before swapping: a = %d, b = %d\n", a, b);
  swap(&a, &b);
  printf("After swapping: a = %d, b = %d\n", a, b);
  return 0;
  
}
/*
Enter two numbers: 5
3
Before swapping: a = 5, b = 3
After swapping: a = 3, b = 5
*/
