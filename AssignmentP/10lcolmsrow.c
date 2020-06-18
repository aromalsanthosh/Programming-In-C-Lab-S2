#include<stdio.h>
#include<math.h>
void main()
{
    int matrix[10][10],i,j,row,column,sum=0,minr=0,maxc=0;
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
    
    for(i=0;i<row;i++)
    {
        minr=matrix[i][0];
        for(j=1;j<column;j++)
        {    if(matrix[i][j]<minr)
                minr=matrix[i][j];
        }
        printf("Row %d minimum value= %d\n",i+1,minr);

    }
    i=0; j=0;
    for(j=0;j<column;j++)
    {
        maxc=matrix[0][j];
        for(i=1;i<row;i++)
        {    if(matrix[i][j]>maxc)
                maxc=matrix[i][j];
        }
        printf("Column %d maximum value= %d\n",j+1,maxc);

    }

}