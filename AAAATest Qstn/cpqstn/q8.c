#include<stdio.h>
void main()
{
  int rows,coef=1,spc,i,j;
  printf("Enter the no. of rows :\n");
  scanf("%d",&rows);
  for (i=0;i<rows;i++)
  {
      for(spc=1;spc<rows-i;spc++)
      {
        printf("  ");
      }
      for(j=0;j<=i;j++)
      {
        if (j==0||i==0)
            coef=1;
        else
            coef=coef*(i-j+1)/j;
            printf("%4d",coef);
      }
      printf("\n");
  }

}
