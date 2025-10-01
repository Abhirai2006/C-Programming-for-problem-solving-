 // 1). isalnum(c) – Checks if the character is alphanumeric

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    if (isalnum(c))
        printf("'%c' is alphanumeric.\n", c);
    else
        printf("'%c' is not alphanumeric.\n", c);
    return 0;
}



