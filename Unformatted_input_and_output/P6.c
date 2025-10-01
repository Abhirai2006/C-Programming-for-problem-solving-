// 3). isdigit(c) – Checks if the character is a digit

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    if (isdigit(c))
        printf("'%c' is a digit.\n", c);
    else
        printf("'%c' is not a digit.\n", c);
    return 0;
}

