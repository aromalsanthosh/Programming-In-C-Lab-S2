#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
char *str[100];
int count=0,i;
printf("enter the no:of strings:");
scanf("%d",&count);
printf("enter the strings:");
for(i=0;i<count;i++)
{
    str[i]=(char *)malloc(20*sizeof(char));
    scanf("%s",str[i]);
}
fun(count,str);
printf("\nSorted Strings is :  \n");
    for(i=0;i<count;i++)
    {
        printf("%d %s\n",i+1,str[i]);
    }
}

void fun(int count,char *str[])
{
    int i,j;
    char t[20];
    for(i=0;i<count-1;i++)
            for(j=i+1;j<count;j++)
                    if(strcmp(str[i],str[j])>0)
                        {
                            strcpy(t,str[j]);
                            strcpy(str[j],str[i]);
                            strcpy(str[i],t);
                        }
                                return;
}