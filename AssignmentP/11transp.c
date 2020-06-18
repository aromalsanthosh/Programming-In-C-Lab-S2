#include<stdio.h>
#include<math.h>
void main()
{
    int matrix[10][10],transp[10][10],i,j,row,column;
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

    printf("\n THe Entered Matrix Is :\n");

    for(i = 0;i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {   
            printf(" %d ",matrix[i][j]);
        }
        printf("\n");  
    }

    for(i = 0;i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {   
            transp[j][i]=matrix[i][j];
        }  
    }

    printf("\n The Transpose Of Entered Matrix Is :\n");

    for(i = 0;i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {   
            printf(" %d ",transp[i][j]);
        }
        printf("\n");  
    }

} 