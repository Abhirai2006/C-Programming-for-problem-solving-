#include<stdio.h>
void main()
{
    int size,temp;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array in random order:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The entered elements of the array in random order are:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }

    // bubble sort

    for(int i=0; i<size-1; i++)
    {
        int flag =  0;
        for(int j=0; j<size-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }

    // printing after sorting

    printf("\nThe array after sorting is:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
}
