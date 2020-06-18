#include<stdio.h>
void main()
{ 
	int a,b,c;
	printf("Enter value for a :\n");
	scanf("%d",&a);
	printf("Enter value for b :\n");
	scanf("%d",&b);
	printf("Enter value for c :\n");
	scanf("%d",&c);
	printf("(a<b)||(a<c):%d \n",(a<b)||(a<c));
	printf("(a==b)||(b>c):%d \n",(a==b)||(b>c));
	printf("(a>b)&&(b>c):%d \n",(a>b)&&(b>c));
	printf("(a!=c)&&(b==c):%d \n",(a!=c)&&(b==c));
		
}
