#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter dimensions of first matrix (rows cols): ");
    scanf("%d %d", &r1, &c1);

    int **mat1 = (int **)malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++)
        mat1[i] = (int *)malloc(c1 * sizeof(int));

    printf("Enter elements for first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter dimensions of second matrix (rows cols): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != c2) {
        printf("Error: Columns must match to concatenate vertically.\n");
        return 1;
    }

    int total_rows = r1 + r2;
    int **combined = (int **)malloc(total_rows * sizeof(int *));

    // Copy matrix 1
    for (int i = 0; i < r1; i++) {
        combined[i] = (int *)malloc(c1 * sizeof(int));
        for (int j = 0; j < c1; j++)
            combined[i][j] = mat1[i][j];
    }

    // Input and copy matrix 2
    for (int i = r1; i < total_rows; i++) {
        combined[i] = (int *)malloc(c2 * sizeof(int));
        printf("Enter elements for row %d of second matrix: ", i - r1);
        for (int j = 0; j < c2; j++)
            scanf("%d", &combined[i][j]);
    }

    // Print combined matrix
    printf("Combined matrix:\n");
    for (int i = 0; i < total_rows; i++) {
        for (int j = 0; j < c1; j++)
            printf("%d ", combined[i][j]);
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < r1; i++) free(mat1[i]);
    free(mat1);
    for (int i = 0; i < total_rows; i++) free(combined[i]);
    free(combined);

    return 0;
}
