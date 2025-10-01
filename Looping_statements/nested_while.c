#include <stdio.h>

int main() {
    int i = 1, j;

    // Outer loop for rows
    while (i <= 5) {
        j = 1;  // Reset column counter for each new row

        // Inner loop for columns
        while (j <= 5) {
            printf("%d\t", i * j);
            j++;
        }
        printf("\n"); // Move to the next line after a row is printed
        i++;
    }

    return 0;
}

// Outer loop initialization
datatype i = initial_value;

while (outer_condition) {

    // Inner loop initialization
    datatype j = initial_value;

    while (inner_condition) {
        // Inner loop body
        // Code to execute repeatedly inside inner loop

        j++; // Inner loop update (essential to avoid infinite loop)
    }

    // Outer loop update
    i++;
}

