//C program to sort N set Of Integers
#include <stdio.h> 

void sort(int n, int* ptr) 
{ 
	int i, j, t; 

	for (i = 0; i < n; i++) 
	{ 

		for (j = i + 1; j < n; j++) 
		{ 

			if (*(ptr + j) < *(ptr + i)) 
			{ 

				t = *(ptr + i); 
				*(ptr + i) = *(ptr + j); 
				*(ptr + j) = t; 
			} 
		} 
	} 


	for (i = 0; i < n; i++) 
		printf("%d ", *(ptr + i)); 
} 


int main() 
{ 
	int arr[100];
    int N, i;
    int * ptr = arr;    

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);
        ptr++;   
    }


    ptr = arr;

    printf("Elements of array are: ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", *ptr);


        ptr++;
    }
    printf("\nSorted Elements:-");


	sort(N, arr); 

	return 0; 
} 
