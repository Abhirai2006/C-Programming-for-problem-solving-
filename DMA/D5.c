#include<stdio.h>
void main()
{
    int rows,columns,layers;
    printf("Enter the number of layers,rows and columns:\n");
    scanf("%d%d%d",&layers,&rows,&columns);

    int ***array3D = (int ***)malloc(layers * sizeof(int **));
    for (int k = 0; k < layers; k++)
    {
        array3D[k] = (int **)malloc(rows * sizeof(int *));
        for (int i = 0; i < rows; i++)
        {
            array3D[k][i] = (int *)malloc(columns * sizeof(int));
        }
    }

    // Take input


    for(int k=0; k<layers; k++)
    {
        printf("Enter the values of the %d layer\n",(k+1));
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<columns; j++)
            {
                scanf("%d", (*(*(array3D + k) + i) + j));
            }
        }
    }

    // Print output


    for(int k=0; k<layers; k++)
    {
        printf("The values of the %d layer are:\n",(k+1));
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<columns; j++)
            {
                printf("%d ", (*(*(*(array3D + k) + i) + j)));
            }
            printf("\n");
        }
        printf("\n");
    }

    for(int k=0; k<layers; k++)
    {
        for(int i=0; i<rows; i++)
        {
            free(array3D[k][i]);
        }
        free(array3D[k]);
    }

    free(array3D);


}
