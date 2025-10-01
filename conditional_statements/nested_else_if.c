#include <stdio.h>

void main() {
    int marks;
    char extraProject;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 80) {
        printf("Grade: B\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
    } else {
        // Nested else if inside the outer else
        printf("Did the student complete an extra project? (y/n): ");
        scanf(" %c", &extraProject); // Note the space before %c to consume leftover newline

        if (extraProject == 'y' || extraProject == 'Y') {
            printf("Grade: D with bonus\n");
        } else {
            printf("Grade: F\n");
        }
    }
}

