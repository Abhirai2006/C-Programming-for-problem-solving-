//8). isprint(c) – Checks if the character is printable

#include <stdio.h>
#include <ctype.h>

int main() {
    char c, c1 = ' ', c2[20] = "abc";

    // Test user input
    printf("Enter a character: ");
    scanf(" %c", &c);
    if (isprint(c))
        printf("'%c' is a printable character.\n", c);
    else
        printf("'%c' is not a printable character.\n", c);

    // Test space
    if (isprint(c1))
        printf("' ' (space) is a printable character.\n");
    else
        printf("' ' (space) is not a printable character.\n");

    // Test tab
    if (isprint(c2))
        printf("Tab is a printable character.\n");
    else
        printf("Tab is not a printable character.\n");

    return 0;
}


// space

/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char c = ' ';
    if (isprint(c))
        printf("Space is a printable character.\n");
    else
        printf("Space is NOT a printable character.\n");
    return 0;
}
*/
