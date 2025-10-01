#include<stdio.h>
#include<stdlib.h>
void main()
{
    int rows1,columns1,rows2,columns2;
    printf("Enter the dimensions of the FIRST matrix:\n");
    scanf("%d%d",&rows1,&columns1);
    printf("Enter the dimensions of the SECOND matrix:\n");
    scanf("%d%d",&rows2,&columns2);

    // Check for valid dimensions for horizontal concatenation
    if (rows1 != rows2)
    {
        printf("Error: For horizontal concatenation, number of rows must be the same.\n");
        exit(1);
    }

    // For horizontal cancatenation


    int columns3 = columns1 + columns2;

    // Dynamically allocate memory blocks
    int **matrix1 = (int**)malloc(rows1*sizeof(int*));
    printf("The location or the address of matrix1 is:%p\n",matrix1);
    int **matrix2 = (int**)malloc(rows1*sizeof(int*));
    printf("The location or the address of matrix2 is:%p\n",matrix2);
    int **matrix3 = (int**)malloc(rows1*sizeof(int*));
    printf("The location or the address of matrix3 is:%p\n",matrix3);


    if(matrix1 == NULL || matrix2 == NULL || matrix3 == NULL)
    {
        printf("Memory allocation failed for the matrices.\n");
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


    // Dynamically allocate memory for the third matrix (The combined one)
    for(int i=0; i<rows1; i++)
    {
        matrix3[i] = (int*)malloc(columns3*sizeof(int));
        if (matrix3[i] == NULL)
        {
            printf("Memory allocation failed for row %d.\n", i);
            return 1;
        }
        printf("The locations allocated for matrix 3[%d] are: %p\n", i, (void *)matrix3[i]);
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
    // Printing matrix 3
    printf("Printing matrix 3.\n");
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<columns3; j++)
        {
            printf("The element at the index[%d][%d] of matrix 3 is:%d\n",i,j,(*(*(matrix3 + i) + j)));
        }
        printf("\n");
    }


    // Combining both the matrices

    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<columns1; j++)
        {
            *(*(matrix3 + i) + j) =  *(*(matrix1 + i) + j);
        }

        for(int j=0; j<columns2; j++)
        {
            *(*(matrix3 + i) + j + columns1) =  *(*(matrix2 + i) + j);
        }
    }


    printf("The matrix after combining is:\n");
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<columns3; j++)
        {
            printf("%d ", *(*(matrix3 + i) + j));
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < rows1; i++)
    {
        free(matrix1[i]);
        free(matrix2[i]);
        free(matrix3[i]);
    }
    free(matrix1);
    free(matrix2);
    free(matrix3);
}
