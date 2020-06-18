#include<stdio.h>
#include<string.h>
void main()
{
	char string1[100],string2[100],string3[100],string4[100];
	char ch1,ch2;
	int i,len1,len2;
	int pos,len;
	printf("Enter 1st string\n");
	scanf("%s",string1);
	printf("Enter 2nd string\n");
	scanf("%s",string2);   
	len1=strlen(string1);
	len2=strlen(string2);
	strcpy(string3,string1);
	strcat(string3,string2);
	printf("Length of 1st string=%d\n",len1);
	printf("Length of 2nd string=%d\n",len2);
	printf("Copied string\n");
	for(i=0;i<len1;i++)	
        printf("%c",string3[i]);
    printf("\n");
	printf("Concatenated string\n");
    for(i=0;i<(len1+len2);i++)
        printf("%c",string3[i]);
    printf("\n");
    printf("Reversed string\n");
	for(i=(len1+len2-1);i>=0;i--)
	    printf("%c",string3[i]);
    printf("\nEnter position and length of substring\n");
 	scanf("%d%d",&pos,&len);
	for(i=0;i<len;i++)
        string4[i]=string3[pos+i-1];
	printf("Required substring\n");
	puts(string4);
    printf("Enter character to be replaced \n");
	scanf(" %c",&ch1);
	printf("Enter character to replace with\n");
	scanf(" %c",&ch2);
    for(i=0;i<len1+len2-1;i++)
	   {
	          if(string3[i]==ch1)
	          string3[i]=ch2;
        }
    puts(string3);
    }