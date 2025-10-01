//7). ispunct(c) – Checks if the character is a punctuation symbol

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    if (ispunct(c))
        printf("'%c' is a punctuation character.\n", c);
    else
        printf("'%c' is not a punctuation character.\n", c);
    return 0;
}
