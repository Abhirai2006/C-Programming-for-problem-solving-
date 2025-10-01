#include <stdio.h>

int main() {
    // Character constants
    char letter = 'A';
    char digit = '7';
    char symbol = '$';

    // Escape sequences
    char newline = '\n';
    char tab = '\t';
    char singleQuote = '\'';
    char backslash = '\\';

    // Display character constants
    printf("Character constants:\n");
    printf("Letter: %c\n", letter);
    printf("Digit: %c\n", digit);
    printf("Symbol: %c\n", symbol);

    // Display escape sequences
    printf("\nEscape sequences:\n");
    printf("Newline: Hello,%cWorld!\n", newline);
    printf("Tab: Hello,%cWorld!\n", tab);
    printf("Single quote: %c\n", singleQuote);
    printf("Backslash: %c\n", backslash);

    // ASCII values
    printf("\nASCII values:\n");
    printf("ASCII of '%c': %d\n", letter, letter);
    printf("ASCII of '%c': %d\n", digit, digit);
    printf("ASCII of '%c': %d\n", symbol, symbol);

    return 0;
}
