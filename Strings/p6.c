#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "OpenAI";
    char str2[] = "OpenUp";
    int result = strncmp(str1, str2, 4);

    if (result == 0)
        printf("First 4 characters are equal\n");
    else
        printf("First 4 characters are different\n");

    return 0;
}
