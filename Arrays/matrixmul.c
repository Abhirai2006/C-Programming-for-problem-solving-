#include <stdio.h>

void main() {
    int m, n, p, q;

    // First matrix input
    printf("Enter the number of rows and columns of the first matrix:\n");
    scanf("%d%d", &m, &n);
    int A[m][n];

    printf("Enter the elements of the first matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("The elements of the first matrix are:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Second matrix input
    printf("Enter the number of rows and columns of the second matrix:\n");
    scanf("%d%d", &p, &q);
    int B[p][q];

    printf("Enter the elements of the second matrix:\n");
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("The elements of the second matrix are:\n");
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Check if multiplication is possible
    if(n != p) {
        printf("Matrix multiplication is not possible. Columns of first != rows of second.\n");
        return;
    }

    // Matrix multiplication
    int C[m][q];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            C[i][j] = 0;
            for(int k = 0; k < n; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    // Output result
    printf("The result of matrix multiplication is:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
