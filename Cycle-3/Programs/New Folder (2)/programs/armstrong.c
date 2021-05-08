#include<stdio.h>
int main()
{
	float num;
	int i=0,org,rem,result=0;
	printf("Enter the 3 digit number :\n");
	scanf("%f",&num);
	org=num;
	for(i=num;num>0;)
	{
		rem=org%10;
		result+=(rem*rem*rem);
		org /= 10;
		
	}
	if(result==num)
		printf("Number %f is Armstrong\n",num);
	else
		printf("Number %f is not Armmstrong\n",num);
	return 0;	
}
