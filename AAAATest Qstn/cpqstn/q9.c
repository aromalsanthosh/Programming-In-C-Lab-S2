#include<stdio.h>
int main()
{ int i,first=0,second=1,third,count=0,n;
  printf("Enter the Value for N:\n");
  scanf("%d",&n);
  printf("Fibonacci Series upto %d terms is :\n",n);
  for (i=0;i<n;i++)
  {
        printf("%d,",first);
        third=first+second;
        first=second;
        second=third;
  }
}
