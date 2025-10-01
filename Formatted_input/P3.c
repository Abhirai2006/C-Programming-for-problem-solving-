#include <stdio.h>

int main() {
    int num = 42;
    float pi = 3.14159;

    // Left alignment for integers (width 10)
    printf("Left alignment for integer (width 10): |%-10d|\n", num);

    // Right alignment for integers (width 10)
    printf("Right alignment for integer (width 10): |%10d|\n", num);

    // Zero padding for integers (width 10)
    printf("Zero padding for integer (width 10): |%010d|\n", num);

    // Floating point number with 2 decimal places and right alignment (width 10)
    printf("Floating point with precision and right alignment (width 10, 2 decimals): |%10.2f|\n", pi);

    // Floating point number with 4 decimal places and left alignment (width 10)
    printf("Floating point with precision and left alignment (width 10, 4 decimals): |%-10.4f|\n", pi);

    return 0;
}

