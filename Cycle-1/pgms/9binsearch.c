//C Program for sequential and binary search

#include <stdio.h>
 
void sequential_search(int array[], int size, int n)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (array[i] == n)
        {
            printf("%d found at location %d.\n", n, i+1);
            break;
        }
    }
    if (i == size)
        printf("Not found! %d is not present in the list.\n", n);
}

void binary_search(int array[], int size, int n)
{
    int i, first, last, middle;
    first = 0;
    last = size - 1;
    middle = (first+last) / 2;
 
    while (first <= last) {
        if (array[middle] < n)
            first = middle + 1;
        else if (array[middle] == n) {
            printf("%d found at location %d.\n", n, middle+1);
           break;
        }
        else
            last = middle - 1;
 
        middle = (first + last) / 2;
    }
    if ( first > last )
        printf("Not found! %d is not present in the list.\n", n);
}

int main()
{
    int a[200], i, j, n, size;
    printf("Enter the size of the list:");
    scanf("%d", &size);
    printf("Enter %d Integers in ascending order\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    printf("Enter value to find\n");
    scanf("%d", &n);
    printf("Sequential search\n");
    sequential_search(a, size, n);
    printf("Binary search\n");
    binary_search(a, size, n);
    return 0;
}
