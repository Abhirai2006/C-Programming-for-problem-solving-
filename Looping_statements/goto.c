#include <stdio.h>
void main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            goto skip;  // Jump to the skip label when i equals 6
        }
        printf("%d ", i);  // Print the number
    }

skip:
    printf("\nJumped to the skip label after i = 6");
}
