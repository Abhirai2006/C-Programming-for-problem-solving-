
#include <stdio.h>

void main() {
    int num;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Outer if
    if (num > 0) {
        // Inner if-else
        if (num % 2 == 0) {
            printf("The number is positive and even.\n");
        } else {
            printf("The number is positive and odd.\n");
        }
    } else {
        // Outer else
        printf("The number is zero or negative.\n");
    }
}
