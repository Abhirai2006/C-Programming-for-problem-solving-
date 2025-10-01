// 2). isalpha(c) – Checks if the character is alphabetic

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    if (isalpha(c))
        printf("'%c' is alphabetic.\n", c);
    else
        printf("'%c' is not alphabetic.\n", c);
    return 0;
}

