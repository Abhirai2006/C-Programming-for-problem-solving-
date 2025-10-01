#include<stdio.h>
void  main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p = &arr;
    printf("Entered elements of the array are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEntered elements of the array are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(p + i));
    }
}
