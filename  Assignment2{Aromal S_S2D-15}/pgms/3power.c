#include<stdio.h>
void calcpow(int,int);
 
void main() 
{
    int num,n,pw;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Enter the value for n (power)\n");
    scanf("%d",&n);
    pw=n;
    calcpow(num,n);

}
 
void calcpow(int num,int n)
{
    int power=1,temp=0;
    temp=n;
    while(n>0)
    {
        power=power*num;
        n--;
    }
    printf("The %dth power of %d = %d",temp,num,power);

}
