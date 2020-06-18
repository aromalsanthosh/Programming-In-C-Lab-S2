#include<stdio.h>
int main()
{
  int  i,j=0, n;
  float numbers[100],lrg,lrg2;
  printf("Enter The Number Of Elements:");
  scanf("%d",&n);
  for (i=0;i<n;++i)
  {
    printf("Enter The Number %d: ",i+1);
    scanf("%f",&numbers[i]);
  }
// find location of the largest element in the array //
  lrg=0;
  for (i=0;i<n;i++)
  {
    if(lrg<numbers[i])
    {
      lrg=numbers[i];
      j=i;
    }
  }
// find location of the second largest element in the array //
  lrg2=0;
  for(i=0;i<n;i++)
  {
    if(i==j)
    {
      i++;  // ignoring the largest element //
      i--;
    }
    else
    {
      if(lrg2<numbers[i])
      {
        lrg2=numbers[i];
      }
    }
  }
  printf("The largest element in the array is : %f \n",lrg);
  printf("The Second largest element in the array is : %f \n",lrg2);
}
