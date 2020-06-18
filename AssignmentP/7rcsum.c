#include<stdio.h>
#include<math.h>
void main()
{
    int matrix[10][10],i,j,row,column,sum=0;
    printf("Enter the no. of rows(m);\n");
    scanf("%d",&row);
    printf("Enter the no. of columns(n);\n");
    scanf("%d",&column);
    printf("Enter the Elements;\n");
    for(i = 0;i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {   
            scanf("%d",&matrix[i][j]);
        }  
    }
    for (i = 0; i < row; ++i) 
        {
            for (j = 0; j < column; ++j) 
            {
                sum = sum + matrix[i][j] ;
            }
 
            printf("Sum of the %d row is = %d\n", i, sum);
            sum = 0;
 
        }
        sum = 0;
        for (j = 0; j < column; ++j) 
        {
            for (i = 0; i < row; ++i)
            {
                sum = sum + matrix[i][j];
            }
 
            printf("Sum of the %d column is = %d\n", j, sum);
            sum = 0;
 
        }
}
