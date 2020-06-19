//C Program to sort names in alphabetic order using array of pointers.
#include<stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
	char *names[100], temp[20];
	int m, n;
	int COUNT=0;
	printf("Enter no. of strings:-\n");
	scanf("%d",&COUNT);
	for (m = 0; m < COUNT; m++)
	{
		printf("\nEnter name[%d] : ",m);
		names[m] = (char *) malloc (20*sizeof(char));
		scanf("%s",names[m]);
	}
	for (m = 1; m <= COUNT; m++)
	{
		for (n = 1; n <= COUNT - m; n++)
		{

			if (strcmp(names[n - 1], names[n]) > 0)
			{
				strcpy(temp, names[n - 1]);
				strcpy(names[n - 1], names[n]);
				strcpy(names[n], temp);
				temp[0] = '\0';
			}
		}
	}		
	printf("\nSorted list is" );
	for (m = 0; m < COUNT; m++)
		printf("\n%s", names[m]);
}