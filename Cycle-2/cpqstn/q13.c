#include<stdio.h>
int main()
{
    int num,sum;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(sum=0;num>0;num=num/10)
        sum = sum + (num%10);
    printf("Sum of digits : %d " ,sum);

}
