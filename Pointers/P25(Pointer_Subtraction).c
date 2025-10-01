#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n1, n2;
    printf("Enter the size of n1 and n2:\n");
    scanf("%d%d", &n1, &n2);

    // Dynamically create two arrays
    int *array1 = (int*)malloc(n1 * sizeof(int));
    int *array2 = (int*)malloc(n2 * sizeof(int));

    if (array1 == NULL || array2 == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Take input for the first array
    printf("Enter the input for the first array.\n");
    for (int i = 0; i < n1; i++)
    {
        printf("Enter the element at array1[%d] (address: %p): ", i, &array1[i]);
        scanf("%d", (array1 + i));
    }

    // Take input for the second array
    printf("Enter the input for the second array.\n");
    for (int i = 0; i < n2; i++)
    {
        printf("Enter the element at array2[%d] (address: %p): ", i, &array2[i]);
        scanf("%d", (array2 + i));
    }

    // Optional: Print both arrays
    printf("\nArray 1 elements:\n");
    for (int i = 0; i < n1; i++)
    {
        printf("array1[%d] = %d\n", i, *(array1 + i));
    }

    printf("\nArray 2 elements:\n");
    for (int i = 0; i < n2; i++)
    {
        printf("array2[%d] = %d\n", i, *(array2 + i));
    }

    int *ptr1 = &array1[0];
    int *ptr2 = &array1[2];

    int d = ptr2 - ptr1;
    printf("The number of elements between %p and %p are:%d\n",ptr2,ptr1,d);

    ptr2 = ptr2 - 2;
    printf("The locations are:%p and %p\n",ptr1,ptr2);

    // Free the allocated memory
    free(array1);
    free(array2);

    return 0;
}
