#include<stdio.h>
void main()
{
	float avg=0,sum=0;
	int i,n,var;
	printf("Enter the value for n :\n");
	scanf("%d",&n);
	printf("Enter the numbers :\n");
	for (i=1;i<=n;i++)
	{		
		sum=sum+i;
	}
	avg=sum/n;
	printf("Sum of first %d Natural numbers is %f \n",n,sum);
	printf("Average of first %d Natural numbers is %f  \n",n,avg);
}
