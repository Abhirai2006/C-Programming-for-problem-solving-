/** Matrix using dynamic memory allocation **/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int rows,columns;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&rows,&columns);

    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL)
    {
        printf("Memory allocation failed for matrix row pointers.\n");
        return 1;
    }
    printf("The address of matrix** is: %p\n", (void *)&matrix);


    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(columns * sizeof(int));
        if (matrix[i] == NULL)
        {
            printf("Memory allocation failed for row %d.\n", i);
            return 1;
        }
        printf("The locations allocated for matrix[%d] are: %p\n", i, (void *)matrix[i]);
    }

    // Taking input
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            printf("Enter the input for the index matrix[%d][%d]:\n",i,j);
            scanf("%d", (*(matrix+i)+j));
        }
    }

    // Printing the output
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            printf("The element at matrix[%d][%d] is:%d \n",i,j,(*(*(matrix+i)+j)));
        }
        printf("\n");
    }

    // Freeing the memory

    for(int i=0; i<rows; i++)
    {
        free(matrix[i]);  // you are freeing the int arrays
    }

    free(matrix); // you are freeing the int* array.
}
