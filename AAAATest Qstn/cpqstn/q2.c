#include <stdio.h>
void main ()
{   int i,n,sum=0;
    printf("Enter a Value For N:\n");
    scanf("%d",&n);
    for(i=2;i<=n;i*=2)
    {
      sum+=i;
    }
    printf("sum of series 2+4+8+.... upto %d is %d \n",n,sum);

}
