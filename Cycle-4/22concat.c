#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100];
	char s2[100];
	int i,j,len;
	printf("Enter 1st string\n");
	scanf("%s",s1);
	printf("Enter 2nd string\n");
	scanf("%s",s2);
	i=0;
	while(s1[i]!='\0')
	  {
	      i++;
	   }
	 j=0;
	while(s2[j]!='\0')
	  {
	      s1[i]=s2[j];
	      i++;
	      j++;
	  }
	  s1[i]='\0';
	printf("Concatenated string\n");
	          printf("%s",s1);
}
          