#include<stdio.h>
#include<stdlib.h>
void main()
{
    /*
    int a = 10;
    int *p = &a;
    // printf("value:%d,%d",a,*(p));
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    int arr[n];
    int *ptr = arr;
    for(int i=0; i<n; i++)
    {
        scanf("%d",(ptr + i));
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(ptr + i));
    }
    */

    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    int *ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i=0; i<n; i++)
    {
        scanf("%d",(ptr + i));
    }

    for(int i=0; i<n; i++)
    {
        printf("The value in ptr[%d] is:%d \n",i, *(ptr + i));
    }

    free(ptr);
}
