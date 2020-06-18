#include<stdio.h>
int main()
{
  int  i, n;
  float numbers[100];
  printf("Enter The Number Of Elements:");
  scanf("%d",&n);
  for (i=0;i<n;++i)
  {
    printf("Enter The Number %d: ",i+1);
    scanf("%f",&numbers[i]);
  }
  for (i=0;i<n;++i)
  {
    if (numbers[0]<numbers[i])
    {
    numbers[0]=numbers[i];
    }
  }
   printf("Largest element = %.2f", numbers[0]);
}
