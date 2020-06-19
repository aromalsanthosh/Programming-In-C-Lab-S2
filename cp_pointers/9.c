
/*C program to multiply two matrices using pointer */

#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],sum=0;
    int m1,m2,n1,n2,i,j,k;
    int *ptr1,*ptr2,*ptr3;
    ptr1=a;ptr2=b;ptr3=c;

    printf("enter no of row and column for 1st matrix\n");
    scanf("%d%d",&m1,&n1);
    printf("enter no of row and column for 2nd matrix\n");
    scanf("%d%d",&m2,&n2);

    if(n1==m2)
    {
        printf("Enter 1st matrix\n");
        for(i=0;i<m1;i++)
            for(j=0;j<n1;j++)
            {
                
                scanf("%d",ptr1+i*10+j);
            }

        printf("\nEnter 2nd matrix\n");
        for(i=0;i<m2;i++)
            for(j=0;j<n2;j++)
            {
                scanf("%d",ptr2+i*10+j);
            }


        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {
               for(k=0;k<n2;k++)
                 sum+=*(ptr1+i*10+k)**(ptr2+k*10+j);
            *(ptr3+i*10+j)=sum;
            sum=0;
            }
        }

        printf("Product of entered matrices :-\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
                printf("%d\t",*(ptr3+i*10+j));
            printf("\n");
        }


    }
    else
    printf("multiplication is not possible");
    return 0;
}
