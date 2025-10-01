#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("Enter the size of two arrays:\n");
    scanf("%d%d", &n1, &n2);

    // Dynamically allocate memory
    int *ptr1 = (int *)malloc(n1 * sizeof(int));
    int *ptr2 = (int *)malloc(n2 * sizeof(int));
    int *temp = (int *)malloc((n1 < n2 ? n1 : n2) * sizeof(int));  // Allocate minimum size

    // Check for successful allocation
    if (ptr1 == NULL || ptr2 == NULL || temp == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Take input for the first array
    for (int i = 0; i < n1; i++)
    {
        printf("Enter the element at the address %p:\n",(ptr1 + i));
        scanf("%d", (ptr1 + i));
    }

    // Take input for the second array
    for (int j = 0; j < n2; j++)
    {
        printf("Enter the element at the address %p:\n",(ptr2 + j));
        scanf("%d", (ptr2 + j));
    }

    // Print both arrays before swap
    printf("\nBefore Swapping:\n");
    printf("First array:\n");
    for (int i = 0; i < n1; i++)
    {
        printf("ptr1[%d] = %d\n", i, *(ptr1 + i));
    }

    printf("Second array:\n");
    for (int j = 0; j < n2; j++)
    {
        printf("ptr2[%d] = %d\n", j, *(ptr2 + j));
    }

    // Swap common elements (up to min(n1, n2))
    int min = (n1 < n2) ? n1 : n2;
    for (int i = 0; i < min; i++)
    {
        *(temp + i) = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = *(temp + i);
    }

    // Print both arrays after swap
    printf("\nAfter Swapping:\n");
    printf("First array:\n");
    for (int i = 0; i < n1; i++)
    {
        printf("ptr1[%d] = %d\n", i, *(ptr1 + i));
    }

    printf("Second array:\n");
    for (int j = 0; j < n2; j++)
    {
        printf("ptr2[%d] = %d\n", j, *(ptr2 + j));
    }

    // Free allocated memory
    free(ptr1);
    free(ptr2);
    free(temp);

    return 0;
}
