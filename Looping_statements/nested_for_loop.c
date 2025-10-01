#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for (i = 1; i <= 3; i++) {
        // Inner loop for columns
        for (j = 1; j <= 3; j++) {
            printf("%d ", i * j); // Print multiplication result
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}


for (initialization1; condition1; update1) {
    // Outer loop body

    for (initialization2; condition2; update2) {
        // Inner loop body
    }

    // Code for the outer loop after the inner loop
}
