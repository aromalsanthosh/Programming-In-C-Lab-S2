/*C Program to access the elements of an array and count the number of
occurrences of the given number in the array.*/
#include <stdio.h>
int count(int *a,int *b,int n);
int print(int *a,int *b,int n);

int main(void)
{
    int a[10000],b[10000],i,n;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    count(a,b,n);
    
    print(a,b,n);   
    
}

int count(int *a,int *b,int n)
{ 
    int i,c,j;
    for(i=0; i<n; i++)
    {
        c=1;
        if(a[i]!=-1)
        {
            for(j=i+1; j<n; j++)
     
            {
               if(a[i]==a[j])
                {
                   c++;
                   a[j]=-1;
               }
           }
           b[i]=c;
        }
         
   
          
    }
     
 }
 
 int print(int *a,int *b,int n)
 { 
    int i,var;
    printf("Enter the number to find occurence:-\n");
    scanf("%d",&var);


    for(i=0; i<n; i++)
    {
         
        if(a[i]==var)
        {
            printf("No. of occurence of %d is %d \n",var,b[i]);
 
        } 
      
    }
    
 }
