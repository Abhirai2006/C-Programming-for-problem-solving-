#include<stdio.h>
void main()
{
    int rows,cols,i,j;
    printf("Enter the number of rows and cols:\n");
    scanf("%d%d",&rows,&cols);
    int arr[rows][cols];
    int arr2[rows][cols];
    int sum[rows][cols];
    printf("Enter the elements of the first array:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The entered elements of the first array are:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of the second array:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("The entered elements of the second array are:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    // Array after addition

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    printf("The sum of the two arrays is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }


}
