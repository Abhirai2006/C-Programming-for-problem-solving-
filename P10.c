#include <stdio.h>

// Macro constant (symbolic constant)
#define PI 3.14159

int main() {
    // Integer constants
    const int intConst = 17;            // Decimal constant
    const int hexConst = 0x11;           // Hexadecimal constant
    const int octConst = 017;            // Octal constant
/*
    // Floating-point constants
    const float floatConst = 3.14f;
    const double doubleConst = 2.71828;

    // Character constants
    const char charConst = 'A';
    const char escapeConst = '\n';       // Escape sequence constant (newline)

    // String constant
    const char *stringConst = "Hello, World!";

    // Enumeration constant
    enum days { SUNDAY, MONDAY, TUESDAY };
    const int today = MONDAY;


    printf("\nFloating-point constants:\n");
    printf("Float: %f\n", floatConst);
    printf("Double: %lf\n", doubleConst);

    printf("\nCharacter constants:\n");
    printf("Character: %c\n", charConst);
    printf("Escape sequence (newline): %d (ASCII value)\n", escapeConst);

    printf("\nString constant:\n");
    printf("%s\n", stringConst);

    printf("\nEnumeration constant:\n");
    printf("Today is day number: %d\n", today);

    printf("\nMacro constant:\n");
    printf("Value of PI: %f\n", PI);
*/
    // Displaying all constants
    printf("Integer constants:\n");
    printf("Decimal: %d\n", intConst);
    printf("Hexadecimal: %d\n", hexConst);
    printf("Octal: %d\n", octConst);

    return 0;
}

