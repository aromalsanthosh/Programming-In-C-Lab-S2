//C program to swap two numbers using user defined function
#include <stdio.h>

int main()
{
   int x, y,flag;
   int *a, *b;
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);

   printf("Before Swapping\nx = %d\ny = %d\n", x, y);

   a=&x;
   b=&y;

   flag  = *b;
   *b = *a;
   *a = flag;
   

   printf("After Swapping\nx = %d\ny = %d\n", x, y);

}