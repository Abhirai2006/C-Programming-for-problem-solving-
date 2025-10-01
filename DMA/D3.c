#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    // input
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The numbers are: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(arr + i));
    }
}
