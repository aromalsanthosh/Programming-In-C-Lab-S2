#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void StrCat(char str[],char str1[]); 
void StrCmp(char str[],char str1[]); 
void StrRev(char str[]); 
void StrUpr(char str[]); 
void StrLwr(char str[]); 
void StrCpy(char str[],char str1[]); 
 
int main()
{
    char str[20],str1[20],ch;
    int op;
    do
    {
        printf("\n----Menu----");
        printf("\n 1.strcat");
        printf("\n 2.strcmp");
        printf("\n 3.strrev");
        printf("\n 4.strupr");
        printf("\n 5.strlwr");
        printf("\n 6.strcpy");
        printf("\n 7.Exit ");
        printf("\n------------");
        printf("\n Which function do you want to use:- ");
        scanf("%d",&op);
        if(op==1 || op==2)
        { 
            printf("\n Enter first string (20 Characters Max):- ");
            scanf("%s",str);
            printf("\n Enter second string (20 Characters Max):- ");
            scanf("%s",str1);
        } 
        else if(op==3 || op==4 || op==5 || op==6)
        {
            printf("\n Enter any string (20 Characters Max):- ");
            scanf("%s",str);
        }
        switch(op)
        {
        case 1:
            StrCat(str,str1);
            break;
        case 2:
            StrCmp(str,str1);
            break;
        case 3:
            StrRev(str);
            break;
        case 4:
            StrUpr(str);
            break;
        case 5:
            StrLwr(str); 
            break;
        case 6:
            StrCpy(str1,str); 
            break;
        case 7:
            exit(0);
        default:
            printf("\n Invalid Choice. \n \n");
        }
    }while(ch!=7);
    
} 


void StrCat(char str[],char str1[])
{
 int i,j=0;
 for(i=(strlen(str));i<=(strlen(str)+strlen(str1)-2);i++)
 { 
    str[i]=str1[j];
    j++;
 }
 
 printf("\n The Concatenation of two strings is %s \n",str);
}


void StrCmp(char str[],char str1[])
{
    int i,j=0,temp=0;
    for(i=0;i<=strlen(str)-1;i++)
    { 
        if(str[i]!=str1[j])
        {
            temp=1;
            break;
        }
        j++;
    }
    if(temp==0)
        printf("\n Two strings is \"%s\" and \"%s\" are same \n \n",str,str1);   
    else
        printf("\n Two strings is \"%s\" and \"%s\" are  not same \n \n",str,str1); 
}


void StrRev(char str[])
{
    char str1[20];
    int i,j=0;
    for(i=strlen(str)-1;i>=0;i--)
    {
        str1[j]=str[i];
        j++;
    }
    printf("\n The reverse string of \"%s\" is \"%s\" \n \n",str,str1);
}


void StrUpr(char str[])
{
    char ch,str1[20];
    int i;
    for(i=0;i<=strlen(str)-1;i++)
    {
        ch=toupper(str[i]);
        str1[i]=ch;
    }
    
    printf("\n The uppercase string of \"%s\" is \"%s\" \n \n",str,str1);
}


void StrLwr(char str[])
{
    char ch,str1[20];
    int i;
    for(i=0;i<=strlen(str)-1;i++)
    {
    ch=tolower(str[i]);
    str1[i]=ch;
    }
    
    printf("\n The lowercase string of \"%s\" is \"%s\" \n \n",str,str1);
}


void StrCpy(char str[],char str1[])
{
    int i,j=0;
    for(i=0;str1[i]!='\0';i++)
    {
    *(str+j)=str1[i];
    j++;
    }
    *(str+j)='\0';
    printf("\n Str1 is copied into Str \n");
    printf("\n Str= %s \n",str);
}