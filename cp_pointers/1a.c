//C Program to add two numbers using pointers
#include <stdio.h>
int main()
{
	int a,b,sum;
	int *x,*y;

	printf("Enter First number:");
	scanf("%d",&a);

	printf("Enter Second number:");
	scanf("%d",&b);

	x=&a;
	y=&b;

	sum=*x+*y;
	printf("Sum of %d and %d =%d\n",a,b,sum);
	return 0;
}