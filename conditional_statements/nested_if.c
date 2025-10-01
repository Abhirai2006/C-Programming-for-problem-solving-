#include <stdio.h>

void main() {
    int marks;
    float income;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    printf("Enter your family income (in rupees): ");
    scanf("%f", &income);

    if (marks > 75) {
        if (income < 100000) {
            printf("You are eligible for a scholarship!\n");
        } else {
            printf("Your marks are good, but income is too high for a scholarship.\n");
        }
    } else {
        printf("Sorry, your marks are not sufficient for a scholarship.\n");
    }
}

