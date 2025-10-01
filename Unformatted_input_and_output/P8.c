// 5). isupper(c) – Checks if the character is uppercase

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    if (isupper(c))
        printf("'%c' is an uppercase letter.\n", c);
    else
        printf("'%c' is not an uppercase letter.\n", c);
    return 0;
}
