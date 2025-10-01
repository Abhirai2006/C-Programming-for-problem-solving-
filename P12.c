#include <stdio.h>

int main() {
    char str[] = "Hello";  // Compiler adds '\0' automatically

    // Print the string normally
    printf("String: %s\n", str);

    // Show each character, including the null terminator
    printf("Characters in str (with ASCII values):\n");
    for (int i = 0; i < 6; i++) {  // 5 characters + null terminator
        if (str[i] == '\0') {
            printf("'\\0' (ASCII: %d)\n", str[i]);
        } else {
            printf("'%c' (ASCII: %d)\n", str[i], str[i]);
        }
    }



    return 0;
}
