#include<stdio.h>
void main()
{
	int a,b,c,big;
	printf("Enter the numbers : \n");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b)
	{	
		if (a>c)
			big=a;
		else
			big=c;
	}
	else if(b>a)
	{
		if(b>c)		
			big=b;
		else
			big=c;
	}
	
	
	printf("%d is"
	       " greatest among three numbers",big);
}


