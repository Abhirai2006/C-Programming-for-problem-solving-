#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int i1, i2;
    printf("Enter two valid indices between 0 and %d:\n", n - 1);
    scanf("%d%d", &i1, &i2);

    if(i1 >= 0 && i1 < n && i2 >= 0 && i2 < n)
    {
        int *p = &arr[i1];
        int *q = &arr[i2];

        int count = (p > q) ? (p - q) : (q - p);  // absolute difference
        printf("Number of elements between arr[%d] and arr[%d] is: %d\n", i1, i2, count);
    }
    else
    {
        printf("Invalid indices entered.\n");
    }
}
