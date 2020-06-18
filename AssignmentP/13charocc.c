#include<stdio.h>
#include<string.h>
int main()
{
  char str[120], search;
  int i, count;
  printf("Enter a String :\n");
  fgets(str,100,stdin);
  printf("Enter a Character :\n");
  search= getchar();
  count=0; i=0;
  while (str[i]!='\0')
  {
    if (str[i]==search)
    {
      count++;
    }
    i++;
  }
  printf("Number of occurence of %c in entered string = %d ",search,count);

}
