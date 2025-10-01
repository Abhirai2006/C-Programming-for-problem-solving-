#include<stdio.h>
void main()
{
    int size,temp;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The entered elements of the array in random order:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    // Bubble sort

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The elements after sorting are:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    // Binary search

     int target, low = 0, high = size - 1, mid, found = 0;
    printf("\nEnter the element to search:\n");
    scanf("%d", &target);

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            printf("Element %d found at index %d (in sorted array)\n", target, mid);
            found = 1;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", target);
    }
}
