// Transpose of a matrix
#include<stdio.h>
void main()
{
    int rows,cols;
    printf("Enter the number of rows and cols:\n");
    scanf("%d%d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The elements of the matrix are:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    // transpose rows will become cols and cols will become rows
    printf("The elements of the matrix after transposing are:\n");
    for(int i=0; i<cols; i++)
    {
        for(int j=0; j<rows; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}
