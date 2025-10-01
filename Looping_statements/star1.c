#include <stdio.h>

int main() {
    int i = 1, j, rows;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop controls the number of rows
    while (i <= rows) {
        j = 1;  // Reset inner loop counter for each row

        // Inner loop prints stars for each row
        while (j <= i) {
            printf("*");
            j++;
        }

        // Move to the next line after printing stars
        printf("\n");

        // Increment the row counter
        i++;
    }

    return 0;
}
