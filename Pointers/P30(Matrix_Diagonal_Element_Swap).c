#include<stdio.h>
#include<stdlib.h>
void main()
{
    int rows1,columns1,rows2,columns2;
    printf("Enter the dimensions of the first matrix (rows1 * columns1):\n");
    scanf("%d%d",&rows1,&columns1);
    printf("Enter the dimensions of the second matrix (rows2 * columns2):\n");
    scanf("%d%d",&rows2,&columns2);
    int rows3 = rows1;

    if (rows1 != rows2 || columns1 != columns2)
    {
        printf("Error: Matrix dimensions must match for swapping.\n");
        exit(1);
    }


    // Dynamically allocate memories for row pointers
    int **matrix1 = (int**)malloc(rows1*sizeof(int*));
    int **matrix2 = (int**)malloc(rows2*sizeof(int*));
    int **matrix3 = (int**)malloc(rows3*sizeof(int*));

    if(matrix1 == NULL || matrix2 == NULL || matrix3 == NULL)
    {
        printf("Memory allocation failed.\n");
    }
    else
    {
        printf("Location of matrix1:%p\n",matrix1);
        printf("Location of matrix2:%p\n",matrix2);
        printf("Location of matrix3:%p\n",matrix3);
    }

    // Dynamically allocate memory for column pointers
    for(int i=0; i<rows1 && i<rows2 && i<rows3; i++)
    {
        matrix1[i] = (int*)malloc(columns1*sizeof(int));
        if(matrix1[i] == NULL)
        {
            printf("Memory allocation failed.\n");
        }
        else
        {
            printf("Location of matrix1[%d]:%p\n",i,matrix1[i]);
        }
        matrix2[i] = (int*)malloc(columns1*sizeof(int));
        if(matrix2[i] == NULL)
        {
            printf("Memory allocation failed.\n");
        }
        else
        {
            printf("Location of matrix2[%d]:%p\n",i,matrix2[i]);
        }
        matrix3[i] = (int*)malloc(columns1*sizeof(int));
        if(matrix3[i] == NULL)
        {
            printf("Memory allocation failed.\n");
        }
        else
        {
            printf("Location of matrix3[%d]:%p\n",i,matrix3[i]);
        }
    }

    // Take input
    printf("Enter the elements of the first matrix:\n");
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<columns1; j++)
        {
            scanf("%d", *(matrix1 + i) + j);
        }
    }


    // Take input
    printf("Enter the elements of the second matrix:\n");
    for(int i=0; i<rows2; i++)
    {
        for(int j=0; j<columns2; j++)
        {
            scanf("%d", *(matrix2 + i) + j);
        }
    }


    // Print both the arrays
    printf("First matrix beofre swapping.\n");
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<columns1; j++)
        {
            printf("%d ", *(*(matrix1 + i) + j));
        }
        printf("\n");
    }


    printf("Second matrix before swapping.\n");
    for(int i=0; i<rows2; i++)
    {
        for(int j=0; j<columns2; j++)
        {
            printf("%d ", *(*(matrix2 + i) + j));
        }
        printf("\n");
    }

    // Here is where the magic happens

    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<columns1; j++)
        {
            if(i == j)
            {
                *(*(matrix3 + i) + j) = *(*(matrix1 + i) + j);
                *(*(matrix1 + i) + j) =  *(*(matrix2 + i) + j);
                *(*(matrix2 + i) + j) = *(*(matrix3 + i) + j);
            }
        }
    }


    printf("The first matrix after swapping.\n");
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<columns1; j++)
        {
            printf("%d ", *(*(matrix1 + i) + j));
        }
        printf("\n");
    }



    printf("The second matrix after swapping.\n");
    for(int i=0; i<rows2; i++)
    {
        for(int j=0; j<columns2; j++)
        {
            printf("%d ", *(*(matrix2 + i) + j));
        }
        printf("\n");
    }




}
