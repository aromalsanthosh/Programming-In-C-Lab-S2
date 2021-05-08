//C program to Input and Print the elements of an array using pointers 
#include <stdio.h>

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
        printf("%d, ", *ptr);


        ptr++;
    }

    return 0;
}