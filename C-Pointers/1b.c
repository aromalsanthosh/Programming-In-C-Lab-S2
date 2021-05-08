//C program to swap two numbers using user defined function
#include <stdio.h>
void swap(int *a, int *b)
{
   int flag;

   flag  = *b;
   *b = *a;
   *a = flag;
}
int main()
{
   int x, y;

   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);

   printf("Before Swapping\nx = %d\ny = %d\n", x, y);

   swap(&x, &y);

   printf("After Swapping\nx = %d\ny = %d\n", x, y);

}