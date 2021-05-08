#include<stdio.h>
void main()
{
    int i,rem,num,rev=0;
    printf("Enter The Number :\n");
    scanf("%d",&num);
    for (i=num;i>0;)
    {   rem=i%10;
        rev=rev*10+rem;
        i/=10;
    }
    if(rev=num)
    {
        printf("The Number Is Palindrome :\n");
    }
    else
        printf("The Number Is Not Palindrome :\n");    
}