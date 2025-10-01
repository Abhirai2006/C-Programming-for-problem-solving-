#include<stdio.h>
void main()
{
    int size,even,odd;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
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

    // Even odd analysis

    for(int i=0;i<size;i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("The number of odd numbers in the array are:%d",odd);
    printf("\n");
    printf("The number of even numbers in the array are:%d",even);
}
