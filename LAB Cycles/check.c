#include<stdio.h>
void main()
{
    int size,ele,count=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter the element to search:\n");
    scanf("%d",&ele);
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

    // search and increment

    for(int i=0; i<size; i++)
    {
        if(arr[i] == ele)
        {
            count++;
        }
    }
    printf("\nThe number of times %d has occurred in the array is %d times",ele,count);
}
