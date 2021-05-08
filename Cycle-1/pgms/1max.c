#include<stdio.h>
int maximum(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;		
}
int main()
{
	int num1,num2,result;
	printf("Enter two numbers:\n");
	scanf("%d%d",&num1,&num2);
	result=maximum(num1,num2);
	printf("%d is a maximum number\n",result);	
}
