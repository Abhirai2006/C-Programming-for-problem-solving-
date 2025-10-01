#include<stdio.h>
#include<stdlib.h>
void main()
{
    int rows,columns;
    printf("Enter the dimensions (rows*columns) of the matrix:\n");
    scanf("%d%d",&rows,&columns);

    int **matrix = (int**)malloc(rows*sizeof(int*));
    if(matrix == NULL)
        printf("Memory allocation failed.\n");
    else
        printf("The base address of matrix is:%p\n",(void**)matrix);

    for(int i=0; i<rows; i++)
    {
        matrix[i] = (int*)malloc(columns*sizeof(int));
        if(matrix[i] == NULL)
            printf("Memory allocation failed.\n");
            else
            printf("The base address of matrix[i] is:%p\n",(void*)matrix[i]);
        }


        // take input
        for(int i=0;i<rows;i++)
        {
            for(int j=0; j<columns; j++)
            {
                scanf("%d", *(matrix + i) + j);
            }
        }

        for(int i=0;i<rows;i++)
        {
            for(int j=0; j<columns; j++)
            {
                printf("%d ", *(*(matrix + i) + j));
            }
            printf("\n");
        }



        // free

        for(int i=0; i<rows; i++)
        {
            free(matrix[i]);
        }
        free(matrix);
    }
