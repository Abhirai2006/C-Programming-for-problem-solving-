#include<stdio.h>
void main()
{
    int matrix[3][4] = {
        {65,66,67,68},
        {69,70,71,72},
        {73,74,'A',76}
    };
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

