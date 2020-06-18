#include<stdio.h>
void main()
{
	int i,n,sum=0,var;
	printf("Enter the value for n :\n");
	scanf("%d",&n);
	printf("Enter the numbers :\n");
	for (i=1;i<=n;i++)
	{		
		scanf("%d",&var);
		sum=sum+var;
	}
	printf("Sum = %d \n",sum);
}
