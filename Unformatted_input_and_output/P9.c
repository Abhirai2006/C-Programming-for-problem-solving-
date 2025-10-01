//6). isspace(c) – Checks if the character is a whitespace character

/*
The isspace(c) function in C checks whether the given character is a whitespace character
These are characters that represent "empty space" in text.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter a character (space, tab, Enter): ");
    c = getchar(); // reads any character including newline
    if (isspace(c))
        printf("Character is a whitespace character.\n");
    else
        printf("Character is not a whitespace character.\n");
    return 0;
}
