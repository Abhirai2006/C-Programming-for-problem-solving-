#include<stdio.h>
void main()
{
    int rows,cols;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&rows,&cols);
    int arr[rows][cols];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The elements of the array are:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
