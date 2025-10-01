#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr[3]; // Array to store 3 arrays (each of different size)
    int sizes[3] = {2, 3, 1}; // Size of each inner array

    // Allocating memory and filling arrays
    for (int i = 0; i < 3; i++) {
        arr[i] = (int *)malloc(sizes[i] * sizeof(int));
        printf("Enter %d elements for array %d:\n", sizes[i], i + 1);
        for (int j = 0; j < sizes[i]; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Printing the arrays
    printf("\nArray of Arrays:\n");
    for (int i = 0; i < 3; i++) {
        printf("Array %d: ", i + 1);
        for (int j = 0; j < sizes[i]; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < 3; i++) {
        free(arr[i]);
    }

    return 0;
}
