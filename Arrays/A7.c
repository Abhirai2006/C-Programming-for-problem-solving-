#include<stdio.h>
void main()
{
    int size,evensum=0;
    int oddsum=0;
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

    // Even and Odd sum

    for(int i=0;i<size;i++)
    {
        if(arr[i] % 2 == 0)
        {
            evensum = evensum + arr[i];
        }
        else
        {
            oddsum = oddsum + arr[i];
        }
    }

    printf("The sum of odd numbers in the array are:%d",oddsum);
    printf("\n");
    printf("The sum of even numbers in the array are:%d",evensum);
}
