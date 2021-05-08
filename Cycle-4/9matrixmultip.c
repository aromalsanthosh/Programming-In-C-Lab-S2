#include<stdio.h>
#include<math.h>
void main()
{
    int a[10][10],b[10][10],mul[10][10],i,j,k,r,c;
    printf("Enter the no. of rows(m) of matrix ;\n");
    scanf("%d",&r);
    printf("Enter the no. of columns(n) of matrix ;\n");
    scanf("%d",&c);
    printf("Enter the Elements  of matrix A;\n");
    for(i = 0;i < r; i++)
    {
        for ( j = 0; j < c; j++)
       {   
            scanf("%d",&a[i][j]);
        }  
    }
    printf("\n THe Entered Matrix A Is :\n");
    for(i = 0;i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {   
            printf(" %d ",a[i][j]);
        }
        printf("\n");  
    }
    printf("Enter the Elements  of matrix B;\n");
    for(i = 0;i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {   
            scanf("%d",&b[i][j]);
        }  
    }
    printf("\n THe Entered Matrix B Is :\n");
    for(i = 0;i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {   
            printf(" %d ",b[i][j]);
        }
        printf("\n");  
    }
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            mul[i][j]=0;    
            for(k=0;k<c;k++)    
            {    
                mul[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }
    printf("MAtrix A x Matrix B :\n");
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
        printf("%d\t",mul[i][j]);    
        }    
        printf("\n");    
    }
}