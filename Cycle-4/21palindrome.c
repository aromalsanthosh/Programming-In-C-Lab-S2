#include<stdio.h>
#include<string.h>
void main()
{
    char wrd[100];
    char wrd1[100];
    int len,t,i,r=1;
    printf("Enter string\n");
    scanf("%s",wrd);
    len=strlen(wrd);
    t=len-1;
    for(i=0;i<len;i++)
    {
    wrd1[i]=wrd[t];
    t--;
    }
    wrd1[i]='\0';
    r=strcmp(wrd,wrd1);
    if(r==0)
    printf("String is palindrome\n");
    else
    printf("String is not palindrome\n");
}
