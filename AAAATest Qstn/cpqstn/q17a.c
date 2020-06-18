 
#include <stdio.h>
int main() 
{ 
    int n,t; 
    printf("Enter the Limit:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    { 
  
        for (int j = i; j < n; j++) 
            printf("\t"); 
  
        t = i; 
  
        for (int k = 1; k <= i; k++) 
        { 
            printf("%d\t\t", t); 
            t = t + n - k; 
        } 
        printf("\n");
    } 
 
  

    return 0; 
}
