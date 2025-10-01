#include<stdio.h>
#include<stdlib.h>
void main()
{
    int rows,columns;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&rows,&columns);

    int **matrix;
    matrix = (int**)malloc(rows*sizeof(int*));

    for(int i=0; i<rows; i++)
    {
        matrix[i] = (int*)malloc(columns*sizeof(int));
    }

    printf("Enter the values of the 2D matrix:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            scanf("%d", (*(matrix + i) + j));
        }
    }

    printf("\nThe entered values of the 2D matrix are:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }

    for(int i=0; i<rows; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

}
