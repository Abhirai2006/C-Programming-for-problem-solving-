#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Example";
    char dest[10];
    strncpy(dest, src, 4);
    dest[4] = '\0'; // Null-terminate manually
    printf("Copied substring: %s\n", dest);
    return 0;
}

