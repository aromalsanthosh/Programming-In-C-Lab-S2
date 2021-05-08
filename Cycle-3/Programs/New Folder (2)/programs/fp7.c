#include<stdio.h>
void main()
{
	int i,n,fact=1,var;
	printf("Enter the number :\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{		
		fact=fact*i;
	}
	printf("%d! = %d \n",n,fact);
}
