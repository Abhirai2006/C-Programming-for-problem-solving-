#include <stdio.h>

int main() {
    int x = 5, y = 10, z;

    z = x++ - --y + ++x - y-- + x-- + y++ - --x + ++y;

    printf("Final values:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    return 0;
}

