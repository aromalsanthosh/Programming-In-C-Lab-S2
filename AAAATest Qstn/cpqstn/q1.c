#include<stdio.h>
void main()
{ int i,n,sum=0;
  printf("Enter a Value For N:\n");
  scanf("%d",&n);
  printf("1+2+3+....+%d = ",n);
  for (i=1;i<=n;i++)
  {
    sum+=i;
  }
  printf("%d",sum );
}
