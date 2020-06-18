#include<stdio.h>
void main()
{ int i,n,fact=1;
  printf("Enter a value for N:\n ");
  scanf("%d",&n );
  for (i=1;i<=n;i++)
  {
    fact*=i;
  }
  printf("%d factorial = %d \n",n,fact);
}
