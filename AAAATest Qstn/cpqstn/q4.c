#include<stdio.h>
int main()
{ int i,low,up;
  printf("Enter the lower bound:\n");
  scanf("%d",&low);
  printf("Enter the upper bound:\n");
  scanf("%d",&up);
  printf("Odd numbers b/w %d & %d are :\n",low,up );
  for (i=low;i<=up;i++)
  {
    if (i%2!=0)
    {
        printf("%d ",i);
    }
  }
}
