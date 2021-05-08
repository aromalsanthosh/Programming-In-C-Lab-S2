#include<stdio.h>
int main()
{
    int i,num,even;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("even digits are:\n");
    for(i=num;num!=0;num=num/10)
    {   even=num%10;
        if (even%2==0)
        {
          printf("%d , ",even);
        }
    }
}
