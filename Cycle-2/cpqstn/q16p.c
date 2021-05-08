#include<stdio.h>
int main()
{
    int i, space, rows, k=0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i=1; i<=rows; ++i,k=0)
    {
        for (space=1; space<=rows-i; ++space)
        { printf("  "); }
        for(k=0;k!=2*i-1;++k)
        {
            printf("* ");
        }
        printf("\n");
    }

}
