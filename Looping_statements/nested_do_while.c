#include <stdio.h>

int main() {
    int rows, cols;
    int i = 1, j;

    // Take input from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    do {
        j = 1;
        do {
            printf("%d ", j);
            j++;
        } while (j <= cols);

        printf("\n");
        i++;
    } while (i <= rows);

    return 0;
}

do {
    // Outer loop body

    do {
        // Inner loop body
    } while (inner_condition);

    // Update outer loop variable

} while (outer_condition);

