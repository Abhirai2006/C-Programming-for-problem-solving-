#include<stdio.h>
#include<stdlib.h>

int main()
{
    int rows, columns, layers, depth;
    printf("Enter the rows, columns, layers and depth:\n");
    scanf("%d%d%d%d", &rows, &columns, &layers, &depth);

    // Creating a pointer of level 4
    int ****tesseract = (int****)malloc(depth * sizeof(int***));
    if(tesseract == NULL)
    {
        printf("Memory block from heap memory not allocated properly.\n");
    }
    else
    {
        printf("The address of tesseract is: %p\n", (void*)&tesseract);
    }

    // Creating memory blocks for layers, rows and columns.
    for(int d = 0; d < depth; d++)
    {
        tesseract[d] = (int***)malloc(layers * sizeof(int**));
        for(int l = 0; l < layers; l++)
        {
            tesseract[d][l] = (int**)malloc(rows * sizeof(int*));
            for(int i = 0; i < rows; i++)
            {
                tesseract[d][l][i] = (int*)malloc(columns * sizeof(int));
            }
        }
    }

    // Taking the input
    printf("Enter the elements for the 4D array:\n");
    for(int d = 0; d < depth; d++)
    {
        for(int l = 0; l < layers; l++)
        {
            for(int i = 0; i < rows; i++)
            {
                for(int j = 0; j < columns; j++)
                {
                    printf("Enter the element at the index tesseract[%d][%d][%d][%d]:",d,l,i,j);
                    scanf("%d", (*(*(*(tesseract + d) + l) + i) + j));
                }
            }
        }
    }

    // Printing the output
    printf("The 4D array is:\n");
    for(int d = 0; d < depth; d++)
    {
        for(int l = 0; l < layers; l++)
        {
            for(int i = 0; i < rows; i++)
            {
                for(int j = 0; j < columns; j++)
                {
                    printf("The element at the index tesseract[%d][%d][%d][%d] is:%d\n",d,l,i,j, *(*(*(*(tesseract + d) + l) + i) + j));
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }

    // Freeing the memory
    for(int d = 0; d < depth; d++)
    {
        for(int l = 0; l < layers; l++)
        {
            for(int i = 0; i < rows; i++)
            {
                free(tesseract[d][l][i]);
            }
            free(tesseract[d][l]);
        }
        free(tesseract[d]);
    }
    free(tesseract);

    return 0;
}
