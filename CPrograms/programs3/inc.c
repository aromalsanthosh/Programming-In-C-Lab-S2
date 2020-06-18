#include<stdio.h>
void main()
{ 
	int a,r,s,t,u;
	printf("Enter value for a :\n");
	scanf("%d",&a);
	r=++a;
	s=a++;
	t=a--;
	u=--a;
	printf("++%d=%d \n",a,r);
	printf("%d++=%d \n",a,s);
	printf("%d--=%d \n",a,t);	
	printf("--%d=%d \n",a,u);	
}
