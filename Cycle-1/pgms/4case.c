//C Program  for case conversion
#include <stdio.h>
#include<string.h>
 
void lowcase(char *s);
void upcase(char *s);
 
int main()
{
    char str[100],choice=0;
 
	printf("Enter any string : ");
    scanf("%[^\n]s",str);
    
    printf("Enter Choice To Which You Want To Convert String Into{Upper(U)/Lower(L)} : \n");
    scanf(" %c",&choice);
    
    if(choice=='l' || choice=='L')
    {   lowcase(str);
        printf("Entered String in Lower Case : %s\n",str);
    }
    else if(choice=='u' || choice=='U')
    {
        upcase(str);
        printf("Entered String in Upper Case : %s\n",str);
    }
    else
    printf("Eror PLease Enter Correct Choice\n");
    
}
 
void lowcase(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        ++i;
    }
}
 
void upcase(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        ++i;
    }
}
