#include <stdio.h>
void main() {
    int a = 10, b = 5;


    printf("Initial value of a: %d\n", a);

    a += b;  // a = a + b
    printf("After a += b: %d\n", a);

    a -= b;  // a = a - b
    printf("After a -= b: %d\n", a);

    a *= b;  // a = a * b
    printf("After a *= b: %d\n", a);

    a /= b;  // a = a / b
    printf("After a /= b: %d\n", a);

    a %= b;  // a = a % b
    printf("After a %%= b: %d\n", a);
}

