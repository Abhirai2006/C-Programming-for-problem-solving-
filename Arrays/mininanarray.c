#include<stdio.h>
void main()
{
    int size,min;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The entered elements of the array are:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    min = arr[0]; // start with the first element
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\n%d is the smallest element in the array.\n",min);
}
