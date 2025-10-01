#include<stdio.h>
#include<stdlib.h>
void main()
{
    int rows1,columns1,rows2,columns2;
    printf("Enter the dimensions of the first matrix:\n");
    scanf("%d%d",&rows1,&columns1);
    printf("Enter the dimensions of the second matrix:\n");
    scanf("%d%d",&rows2,&columns2);

    if (rows1 != rows2 || columns1 != columns2)
    {
        printf("Matrix dimensions must match to perform a swap.\n");
        return 1;
    }


    int** matrix1 = (int**)malloc(rows1*sizeof(int*));
    int** matrix2 = (int**)malloc(rows2*sizeof(int*));
    int **temp = (int**)malloc(rows1*sizeof(int*));

    if(matrix1 == NULL || matrix2 == NULL)
    {
        printf("Memory allocation failed to matrix 1 and matrix 2.\n");
    }

    // Dynamically allocate memories for the first matrix
    for(int i=0; i<rows1; i++)
    {
        matrix1[i] = (int*)malloc(columns1*sizeof(int));
        if (matrix1[i] == NULL)
        {
            printf("Memory allocation failed for row %d.\n", i);
            return 1;
        }
        printf("The locations allocated for matrix 1[%d] are: %p\n", i, (void *)matrix1[i]);
    }


    // Dynamically allocate memories for the second matrix
    for(int i=0; i<rows2; i++)
    {
        matrix2[i] = (int*)malloc(columns2*sizeof(int));
        if (matrix2[i] == NULL)
        {
            printf("Memory allocation failed for row %d.\n", i);
            return 1;
        }
        printf("The locations allocated for matrix 2[%d] are: %p\n", i, (void *)matrix2[i]);
    }

    printf("-----------------------------------------------------------------------\n");
    printf("MATRIX ONE.\n");
    // Take input for the first matrix
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<columns1; j++)
        {
            printf("Enter the element at matrix1[%d][%d]:",i,j);
            scanf("%d",(*(matrix1 + i) + j)); // scanf("%d", &(*(*(matrix1 + i) + j)));
        }
    }

    printf("-----------------------------------------------------------------------\n");
    printf("MATRIX TWO.\n");
    // Take input for the second matrix
    for(int i=0; i<rows2; i++)
    {
        for(int j=0; j<columns2; j++)
        {
            printf("Enter the element at matrix2[%d][%d]:",i,j);
            scanf("%d",(*(matrix2 + i) + j)); // scanf("%d", &(*(*(matrix2 + i) + j)));
        }
    }


    printf("-----------------------------------------------------------------------\n");
    // Printing matrix 1
    printf("Printing matrix 1.\n");
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<columns1; j++)
        {
            printf("The element at the index[%d][%d] of matrix 1 is:%d\n",i,j,(*(*(matrix1 + i) + j)));
        }
        printf("\n");
    }


    printf("-----------------------------------------------------------------------\n");
    // Printing matrix 2
    printf("Printing matrix 2.\n");
    for(int i=0; i<rows2; i++)
    {
        for(int j=0; j<columns2; j++)
        {
            printf("The element at the index[%d][%d] of matrix 1 is:%d\n",i,j,(*(*(matrix2 + i) + j)));
        }
        printf("\n");
    }


    printf("-----------------------------------------------------------------------\n");
    // Dynamically allocate memories for the temp matrix
    for(int i=0; i<rows1; i++)
    {
        temp[i] = (int*)malloc(columns1*sizeof(int));
        if (temp[i] == NULL)
        {
            printf("Memory allocation failed for row %d.\n", i);
            return 1;
        }
        printf("The locations allocated for temp[%d] are: %p\n", i, (void *)temp[i]);
    }


    printf("-----------------------------------------------------------------------\n");
    // Swapping of matrices
    for(int i=0; i<rows2; i++)
    {
        for(int j=0; j<columns2; j++)
        {
            (*(*(temp + i) + j)) = (*(*(matrix1 + i) + j));
            (*(*(matrix1 + i) + j)) = (*(*(matrix2 + i) + j));
            (*(*(matrix2 + i) + j)) = (*(*(temp + i) + j));
        }
    }


    printf("-----------------------------------------------------------------------\n");
    printf("After Swapping of matrices.\n");
    printf("MATRIX ONE.\n");
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<columns1; j++)
        {
            printf("%d ",(*(*(matrix1 + i) + j)));
        }
        printf("\n");
    }


    printf("-----------------------------------------------------------------------\n");
    printf("MATRIX TWO.\n");
    for(int i=0; i<rows2; i++)
    {
        for(int j=0; j<columns2; j++)
        {
            printf("%d ",(*(*(matrix2 + i) + j)));
        }
        printf("\n");
    }

    // Freeing the allocated memory
    for (int i = 0; i < rows1; i++)
    {
        free(matrix1[i]);
        free(matrix2[i]);
        free(temp[i]);
    }
    free(matrix1);
    free(matrix2);
    free(temp);
}


