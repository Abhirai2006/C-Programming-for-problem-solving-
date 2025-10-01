#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of n:\n");
    scanf("%d",&n);
    int *arr1[n];
    int arr2[n];

    printf("Enter the elements of the array:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr2[i]);
    }

    // Storing
    for(int i=0; i<n; i++)
    {
        arr1[i] = &arr2[i];
    }

    // Printing all the elements

    for(int i=0; i<n; i++)
    {
        printf("%d ",*(arr1[i])); // just (arr1[i]) will give the address locations.
    }


}
