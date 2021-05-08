#include<stdio.h>
#include<math.h>
void main()
{
    int matrix[10][10],i,j,row,column,a,sum=0,norm,trace=0;
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
            a = matrix[i][j] * matrix[i][j];
            sum = sum + a;
        }  
    }
    norm=sqrt((double)sum);
    for (i = 0; i < row; ++i) 
        {
            trace = trace + matrix[i][i];
        }
    if(row==column)
        printf("\nTrace Of Matrix = %d\n",trace);
    else
        printf("The given matrix has no trace");
    printf("\nNorm Of Matrix = %d\n",norm);
    
}
