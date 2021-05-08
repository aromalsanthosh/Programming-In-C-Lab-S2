#include<stdio.h>
int main()
{
     int a[100],n,i,j,check=0,prime[100],t=0;
     printf("Enter The Limit Of NUmbers : \n");
     scanf("%d",&n);
     printf("\nEnter %d Numbers in Array:\n\n",n);
     for(i=0;i<n;i++)
          scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
          check=0;
          for(j=2;j<a[i];j++)
          {
               if(a[i]%j==0)
               {
                    check=1;
                    break;
               }
          }
          if(check==0)
          {
               prime[t]=a[i];
               t++;
          }
     }
     printf("\nPrime Numbers Among Entered Numbers:\n\n");
     for(i=0;i<t;i++)
     {
          if(prime[i]!=1)
          {
            printf(" %d ",prime[i]);
          }
     }
     return 0;
}
