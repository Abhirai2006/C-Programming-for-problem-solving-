#include <stdio.h>

void main() {
    int a = 10, b = 5, c = 0;

    // Logical AND (&&)
    printf("a > b && b > c : %d\n", (a > b && b > c));
    printf("a > b && c > b : %d\n", (a > b && c > b));

    // Logical OR (||)
    printf("a > b || c > b : %d\n", (a > b || c > b));
    printf("c > a || c > b : %d\n", (c > a || c > b));

    // Logical NOT (!)
    printf("!(a > b) : %d\n", !(a > b));
    printf("!(c > b) : %d\n", !(c > b));

}

