#include<stdio.h>
int main()
{
  int  i, n;
  float numbers[100],average,sum=0;
  printf("Enter The Number Of Elements:");
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    printf("Enter The Number %d: ",i+1);
    scanf("%f",&numbers[i]);
    sum+=numbers[i];
  }
  average=sum/n;
  printf("Average of entered numbers is %f \n",average );
}
