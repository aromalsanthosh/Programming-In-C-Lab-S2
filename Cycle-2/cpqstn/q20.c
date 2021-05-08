#include <stdio.h>
int main()
{
  int i,j,low,high,prime=1;
  printf("Enter two numbers(intervals): \n");
  scanf("%d %d", &low, &high);
  printf("Prime numbers between %d and %d are: ", low, high);
  for(i=low;i<=high;i++)
  {
    prime=1;
    for(j=2;j<=i-1;j++)
    {
      if(i%j==0)
      { prime=0;
        break;
      }
    }
    if(prime==1)
      printf("%d ",i );
  }
}
