#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of n:\n");
    scanf("%d",&n);
    int a[n];
    int *arr = &a[0];

    printf("Enter the elements of the array:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", *(arr + i));
    }
}
