
// C program to compare two string using pointers & Dynamic Memory allocation



#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_string(char*, char*);

int main()
{
	char *first=(char *)malloc(20 * sizeof(char));;
	char *second=(char *)malloc(20 * sizeof(char));;
	char result;



	printf("Enter first string\n");
	fgets(first,20* sizeof(char),stdin);

	printf("Enter second string\n");
	fgets(second,20* sizeof(char),stdin);

	result = compare_string(first, second);

	if ( result == 0 )
		printf("Both strings are same.\n");
	else
		printf("Entered strings are not same.\n");

	free(first);
	free(second);

	return 0;
}

int compare_string(char *first, char *second)
{
while(*first==*second)
{
	if ( *first == '\0' || *second == '\0' )
		break;
	first++;
	second++;
}
if( *first == '\0' && *second == '\0' )
	return 0;
else
	return -1;
}

