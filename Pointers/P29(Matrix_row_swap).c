#include<stdio.h>
#include<stdlib.h>
void main()
{
    int rows,columns;
    printf("Enter the dimensions of the matrix (rows*columns):\n");
    scanf("%d%d",&rows,&columns);
    int rotations = rows;

    // Dynamically allocate memory to the row pointers
    int **matrix = (int**)malloc(rows*sizeof(int*));
    if(matrix == NULL)
    {
        printf("Memory allocation failed.\n");
    }
    else
    {
        printf("The location of matrix is %p\n",(void*)matrix);
    }

    // Dynamically allocate memory to the columns
    for(int i=0; i<rows; i++)
    {
        matrix[i] = (int*)malloc(columns*sizeof(int));
        if(matrix[i] == NULL)
            printf("The column memory allocation failed.\n");
        else
            printf("The address location of matrix[%d] is:%p\n",i,matrix[i]);
    }

    // Proving something
    for(int i=0; i<1; i++)
        printf("matrix = %p and matrix1 = %p\n",*matrix,matrix[i]);

    // Take input for the matrix
    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            scanf("%d",*(matrix + i) + j);
        }
    }

    // Print the matrix
    printf("The elements of the matrix are:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            printf("%d ",*(*(matrix + i) + j));
        }
        printf("\n");
    }

    // Dynamic memory allocation for a 1D array

    int *arr = (int*)malloc(rows*sizeof(int));

    // Swapping begins here
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            *(arr + j) = *(*(matrix + i) + j);
        }
    }

    // Printing arr
    for(int i=0; i<rows; i++)
    {
        printf("%d ",*(arr + i));
    }
}
