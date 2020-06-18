#include<stdio.h>
#include<string.h>
int main()
{
  char para[500];
  int i, count=0;
  printf("Enter a Paragraph :\n");
  fgets(para,500,stdin);
  for (i = 0;para[i] != '\0';i++)
   {
       if (para[i] == ' ' && para[i+1] != ' ')
           count++;
   }
   printf("Number of words in given string are: %d\n",count + 1);
   count=0;
   for ( i = 0; para[i] != '\0'; ++i)
   {
        if (para[i] == 'a' || para[i] == 'e' || para[i] == 'i' ||
            para[i] == 'o' || para[i] == 'u' || para[i] == 'A' ||
            para[i] == 'E' || para[i] == 'I' || para[i] == 'O' ||
            para[i] == 'U')
            {
            ++count;
            }
    }
    printf("Number of vowels in given string are: %d\n",count);
    count=0;
    for (i = 0;para[i] != '\0';i++)
    {
       if(para[i] == '.' || para[i] == '?' || para[i] == '!')
       {
         count++;
       }

    }
    printf("Number of sentences in given string are: %d\n",count);
}
