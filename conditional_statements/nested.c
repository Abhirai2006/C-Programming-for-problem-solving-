#include <stdio.h>

void main() {
    int a, b, c, d;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // First compare a and b
    if (a > b) {
        // Compare a and c
        if (a > c) {
            // Compare a and d
            if (a > d) {
                printf("Greatest number is: %d\n", a);
            } else {
                printf("Greatest number is: %d\n", d);
            }
        } else {
            // Compare c and d
            if (c > d) {
                printf("Greatest number is: %d\n", c);
            } else {
                printf("Greatest number is: %d\n", d);
            }
        }
    } else {
        // Now b is greater than or equal to a
        if (b > c) {
            if (b > d) {
                printf("Greatest number is: %d\n", b);
            } else {
                printf("Greatest number is: %d\n", d);
            }
        } else {
            if (c > d) {
                printf("Greatest number is: %d\n", c);
            } else {
                printf("Greatest number is: %d\n", d);
            }
        }
    }
}

