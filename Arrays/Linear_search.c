#include<stdio.h>
void main()
{
    int size,x,found;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The entered elements of the array are:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
    // Now performing Linear Search

    for(int i=0;i<size;i++)
    {
        if(arr[i] == x)
        {
            printf("%d is found at index %d",x,i);
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("%d is not found in the array.\n", x);
    }
}
