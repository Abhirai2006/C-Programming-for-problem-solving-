#include<stdio.h>

int main()
{
    char a, b;
    char result[3];  // Array to hold the two characters + null terminator

    // Read two characters
    scanf("%c%c", &a, &b);

    // Concatenate the characters
    result[0] = a;
    result[1] = b;
    result[2] = '\0';  // Null terminate the string

    printf("The value is %s\n", result);

    return 0;
}
