#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows1, columns1, rows2, columns2;

    printf("Enter the dimensions of the ASCII value matrix:\n");
    scanf("%d%d", &rows1, &columns1);
    printf("Enter the dimensions of the character matrix:\n");
    scanf("%d%d", &rows2, &columns2);

    int **ascii = (int **)malloc(rows1 * sizeof(int *));
    char **ch = (char **)malloc(rows2 * sizeof(char *));

    if (ascii == NULL || ch == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < rows1; i++)
    {
        ascii[i] = (int *)malloc(columns1 * sizeof(int));
        if (ascii[i] == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    for (int i = 0; i < rows2; i++)
    {
        ch[i] = (char *)malloc(columns2 * sizeof(char));
        if (ch[i] == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    // Input using pointer dereferencing
    printf("Enter the input for the ASCII value matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            scanf("%d", (*(ascii + i) + j));
        }
    }

    printf("Enter the input for the character matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            scanf(" %c", (*(ch + i) + j));
        }
    }

    // Output using pointer dereferencing
    printf("Original ASCII matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            printf("%d ", *(*(ascii + i) + j));
        }
        printf("\n");
    }

    printf("Original character matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            printf("%c ", *(*(ch + i) + j));
        }
        printf("\n");
    }

    // Flatten, sort and refill ASCII matrix
    int total = rows1 * columns1;
    int *flat = (int *)malloc(total * sizeof(int));
    int index = 0;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            flat[index++] = ascii[i][j];
        }
    }
    for (int i = 0; i < total - 1; i++)
    {
        for (int j = 0; j < total - i - 1; j++)
        {
            if (flat[j] > flat[j + 1])
            {
                int temp = flat[j];
                flat[j] = flat[j + 1];
                flat[j + 1] = temp;
            }
        }
    }
    index = 0;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            ascii[i][j] = flat[index++];
        }
    }

    printf("Sorted ASCII matrix:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            printf("%d ", *(*(ascii + i) + j));
        }
        printf("\n");
    }

    // Flatten, sort and refill character matrix
    total = rows2 * columns2;
    char *flat_ch = (char *)malloc(total * sizeof(char));
    index = 0;
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            flat_ch[index++] = ch[i][j];
        }
    }
    for (int i = 0; i < total - 1; i++)
    {
        for (int j = 0; j < total - i - 1; j++)
        {
            if (flat_ch[j] > flat_ch[j + 1])
            {
                char temp = flat_ch[j];
                flat_ch[j] = flat_ch[j + 1];
                flat_ch[j + 1] = temp;
            }
        }
    }
    index = 0;
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            ch[i][j] = flat_ch[index++];
        }
    }

    printf("Sorted character matrix:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            printf("%c ", *(*(ch + i) + j));
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < rows1; i++)
    {
        free(ascii[i]);
    }
    for (int i = 0; i < rows2; i++)
    {
        free(ch[i]);
    }
    free(ascii);
    free(ch);
    free(flat);
    free(flat_ch);

    return 0;
}
