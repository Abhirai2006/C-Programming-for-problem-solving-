#include <stdio.h>

int main() {
    int i;

    // Loop to check numbers 1 to 10
    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            continue; // Exit the loop when i equals 6
        }
        printf("%d ", i); // Print the value of i
    }

    printf("\nLoop ended because i = %d\n", i); // Inform where the loop stopped

    return 0;
}

