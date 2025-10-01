#include <stdio.h>
void main() {
    int a = 10, b = 5;
    int result;
    result = (a > b) && (b != 10) && (b < 11) && (a > 5);
    printf("%d\n", result);

    printf("%d\n", a && b);
    printf("%d\n", 10 && 1);

}

