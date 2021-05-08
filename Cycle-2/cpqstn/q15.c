#include<stdio.h>
void main()
{
    int i,num,rem,rev=0;
    printf("\n Enter The Number:");
    scanf("%d",&num);
    for(i=num;i>0; )
    {
        rem=i%10;
        rev=rev*10+rem;
        i=i/10;
    }
    if(rev==num)
    {
        printf("\n %d is a Palindrome Number",num);
    }
    else
    {
        printf("\n %d is not a Palindrome Number",num);
    }

}
