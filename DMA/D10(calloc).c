#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter the size for n:\n");
    scanf("%d", &n);

    // Dynamically allocate memory
    int *arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL)
        printf("Memory allocation failed.\n");
    else
        printf("The address allocated to arr is: %p\n", (void *)arr);

    // Take input dynamically
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at arr[%d] location %p: ", i, (void *)(arr + i));
        scanf("%d", arr + i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The element at arr[%d] location %p is:", i, (void *)(arr + i));
        printf("%d ", *(arr + i));
        printf("\n");
    }
}
