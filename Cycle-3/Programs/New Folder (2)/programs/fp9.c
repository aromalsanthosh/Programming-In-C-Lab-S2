#include<stdio.h>
int main()
{
	int org,rem,num,result=0;
	printf("Enter the 3 digit number :\n");
	scanf("%d",&num);
	org=num;
	while(org!=0)
	{
		rem=org%10;
		result+=(rem*rem*rem);
		org /= 10;
		
	}
	if(result==num)
		printf("Number %d is Armstrong\n",num);
	else
		printf("Number %d is not Armmstrong\n",num);
	return 0;	
}
