// 4). islower(c) – Checks if the character is lowercase

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    if (islower(c))
        printf("'%c' is a lowercase letter.\n", c);
    else
        printf("'%c' is not a lowercase letter.\n", c);
    return 0;
}
