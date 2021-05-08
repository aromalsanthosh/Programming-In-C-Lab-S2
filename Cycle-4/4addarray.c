#include<stdio.h>
void main()
{
    int a[100],b[100],sum[100],i,n;
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    printf("\nenter the first array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nenter the second array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        sum[i]=a[i]+b[i];
    printf("\nsum of two array is:\n");
    for(i=0;i<n;i++)
        printf(" %d ",sum[i]);
 }
