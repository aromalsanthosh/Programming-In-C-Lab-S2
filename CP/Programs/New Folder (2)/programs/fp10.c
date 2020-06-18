#include<stdio.h>
void main()
{
	int i,org,rem,rev=0,n;
	printf("Enter the number :\n");
	scanf("%d",&n);
	org=n;
	while(n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n/=10;
	}
	if(rev==org)
		printf("Number is Paliandrome\n");
	else
		printf("Number is not Paliandrome\n");
	
}
