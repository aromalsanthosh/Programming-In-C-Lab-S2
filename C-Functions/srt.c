#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char StrCat(char str1[], char str2[]);
char StrCmp(char str3[], char str4[]);
char StrRev(char str5[]);
char StrUpr(char str5[]);
char StrLwr(char str5[]);
char StrCpy(char str7[]);
void main()
{
  char str1[50],str2[50],str3[50],str4[50],str5[50],str7[50];
  printf("1.concatenation\n");
  printf("enter first string:\n");
  scanf("%s",str1);
  printf("enter second string:\n");
  scanf("%s",str2);
  StrCat(str1,str2);
  printf("\n2.compare\n");
  printf("enter first string again:");
  scanf("%s",str3);
  printf("enter second string again:");
  scanf("%s",str4);
  StrCmp(str3,str4);
  printf("\n3.reverse\n");
  printf("enter any one string again to reverse:");
  scanf("%s",str5);
  StrRev(str5);
  printf("\n4.upper case\n");
  StrUpr(str5);
  printf("\n5.lower case\n");
  StrLwr(str5);
  printf("\n6.copy\n");
  printf("enter any one string once more to copy:\n");
  scanf("%s",str7);
  StrCpy(str7);
}
char StrCat(char str1[],char str2[])
{
  int i,j=0;
  for(i=strlen(str1);i<=((strlen(str1)+strlen(str2))-2);i++)
  {
    str1[i]=str2[j];
    j++;
  }
  printf("after concatenating the strings=%s",str1);
}
char StrCmp(char str3[],char str4[])
{
  int i,j=0,temp=0;
  for(i=0;i<(strlen(str3)-1);i++)
  {
    if(str3[i]!=str4[j])
    {
      temp=1;
      break;
    }
    j++;
  }
  printf("first string=%s\n",str3);
  printf("second string=%s\n",str4) ;
  if(temp==1)
    printf("strings are not same\n");
  else
    printf("strings are same\n");
}
char StrRev(char str5[])
{
  char str6[50];
  int i,j=0;
  for(i=(strlen(str5)-1);i>=0;i--)
  {
    str6[j]=str5[i];
    j++;
  }
  printf("reversed srting=%s",str6);
}
char StrUpr(char str5[])
{
  int i;
  for(i=0;i<=(strlen(str5)-1);i++)
  {
    if(str5[i]>='a'&&str5[i]<='z')
    str5[i]=str5[i]-32;
  }
  printf("changed to upper case=%s",str5);
}
char StrLwr(char str5[])
{
  int i;
  for(i=0;i<=(strlen(str5)-1);i++)
  {
    if(str5[i]>='A'&&str5[i]<='Z')
    str5[i]=str5[i]+32;
  }
  printf("changed to upper case=%s",str5);
}
char StrCpy(char str7[])
{
  char str8 [50];
  int i=0;
  for(i=0;str7[i]!='\0';i++)
  {
    str8[i]=str7[i];
  }
  printf("string copied= %s",str8);
}