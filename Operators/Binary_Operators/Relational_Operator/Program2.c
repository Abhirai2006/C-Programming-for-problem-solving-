#include <stdio.h>

void main() {
    int a, b; // 10 20
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nResults of relational operations:\n");
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    printf("%d > %d : %d\n", a, b, a > b);
    printf("%d < %d : %d\n", a, b, a < b);
    printf("%d >= %d : %d\n", a, b, a >= b);
    printf("%d <= %d : %d\n", a, b, a <= b);
}

