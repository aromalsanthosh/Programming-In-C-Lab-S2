#include<stdio.h>
int main()
{
  int num,digit,sum=0,i;
  printf("Enter A Number:");
  scanf("%d",&num);
  for(i=num;num!=0;num/=10)
  {
    digit=num%10;
    sum+=(digit*digit*digit);
  }
  if (sum==i)
    printf("%d is Armstrong Number",i );
  else
    printf("%d is Not Armstrong Number",i);
}
