#include<stdio.h>
int main()
{
	int a,b,s,d,q,r;
	printf("\n Enter the first number : ");
	scanf("%d",&a);
	printf(" \n Enter the second number :");
	scanf("%d",&b);
	s=a+b;
	printf("\nSum: %d",s);
	d=a-b;
	printf("\nDifference: %d",d);
	q=a/b;
	printf("\nQuotient: %d",q);
	r=a%b;
	printf("\nRemainder: %d",r);
}
