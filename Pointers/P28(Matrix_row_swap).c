#include<stdio.h>
#include<stdlib.h>
void main()
{
    int rows,columns;
    printf("Enter the dimensions of the matrix (rows*columns):\n");
    scanf("%d%d",&rows,&columns);

    // Dynamic memory allocation
    int **matrix = (int**)malloc(rows*sizeof(int*));
    printf("The starting address of the matrix is:%p.\n",(void*)matrix);
    if(matrix == NULL)
    {
        printf("Memory allocation to matrix failed.\n");
        exit(1);
    }

    // Dynamic memory allocation for each row
    for(int i=0; i<rows; i++)
    {
        matrix[i] = (int*)malloc(columns*sizeof(int));
        if(matrix[i] == NULL)
        {
            printf("Memory allocation to the columns failed.\n");
            exit(1);
        }
    }
}
