#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a = 0, b = 1, fib = 0;

    if (n == 0) {
        fib = 0;
    } else if (n == 1) {
        fib = 1;
    } else {
        for (int i = 2; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    printf("Fibonacci number at position %d is: %d\n", n, fib);
    return 0;
}
