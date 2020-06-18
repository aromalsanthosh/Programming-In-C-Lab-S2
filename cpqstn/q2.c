#include<stdio.h>
#include<math.h>
int main()
{ int i,n,sum=0;;
  printf("Enter a Value For N:\n");
  scanf("%d",&n);
  printf("2+4+8+....+%d = ",n);
  for (i=1;i<=n;i*=2)
  {
    sum+=pow(2,i);
  }
  printf("%d",sum );
}
