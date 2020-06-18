#include<stdio.h>
void main()
{ 
	float a,b,r,s,t,u;
	printf("Enter value for a :\n");
	scanf("%f",&a);
	r=a;		
	printf("Enter value for b :\n");
	scanf("%f",&b);
	printf("a+b=%f \n",a+=b);
	a=r;
	printf("a-b=%f \n",a-=b);
	a=r;	
	printf("a/b=%f \n",a/=b);
	a=r;
	printf("a*b=%f \n",a*=b);
}
