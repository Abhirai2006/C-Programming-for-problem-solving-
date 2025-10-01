#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++) {
        // Print spaces for centering
        for(int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars with space between
        for(int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
