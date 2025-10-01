#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array in order:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The entered elements of the array are:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }

    // enter the element to search

    int ele;
    printf("\nEnter the element to search:\n");
    scanf("%d",&ele);

    // binary search

    int low = 0, high = size - 1, mid, found = 0;

    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == ele)
        {
            printf("Element %d found at index %d",ele,mid);
            found = 1;
            break;
        }
        else if(arr[mid] > ele)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

    }

    if (!found)
    {
        printf("Element %d not found in the array.\n", ele);
    }
}
