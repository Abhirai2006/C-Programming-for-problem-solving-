#include<stdio.h>
void main()
{
    int arr[] = {-1, 32, 73, -94, 105, -196, 77, 28};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The memory size of the array is:%d and the size of the array is:%d\n",sizeof(arr),size);
    for(int i=0; i<size; i++)
    {
        printf("For %d the location is %d ",arr[i],&arr[i]);
        printf("\n");
    }

    // address of an array.

    printf("\n");
    double a[5] = {-19.08, -2.43, 0.39, -1.874, -4.05};
    double size1 = sizeof(a) / sizeof(a[0]);
    for(int i=0; i<size1; i++)
    {
        printf("For %lf the location is %d ",a[i],&a[i]);
        printf("\n");
    }
}
