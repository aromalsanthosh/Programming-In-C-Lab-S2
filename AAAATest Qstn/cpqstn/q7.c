#include<stdio.h>
int main()
{ int i,num,lim,r;
  printf("Enter the Number:\n");
  scanf("%d",&num);
  printf("Enter the Limit:\n");
  scanf("%d",&lim);
  printf("Multiplication Tale Of %d upto %d is :\n",num,lim );
  for (i=1;i<=lim;i++)
  { r=num*i;
    printf("%d x %d = %d\n",num,i,r);
  }
}
