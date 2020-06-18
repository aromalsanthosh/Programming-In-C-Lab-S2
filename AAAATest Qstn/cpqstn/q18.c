#include <stdio.h>
 int main() 
{ 
    int i, j = 1, k = 1,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) 
    { 
        printf(" %d ", k); 
        j = j + 1; 
        k = k + j; 
    } 
 
   return 0; 
}
