#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    char operator;
    int result;

    while (1) {
        printf("\nEnter two numbers: ");
        scanf("%d %d", &num1, &num2);

        printf("Enter an operator (+, -, *, /, %%): ");
        scanf(" %c", &operator);  // Space before %c to consume leftover newline

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %d\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %d\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %d\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %d\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case '%':
                if (num2 != 0) {
                    result = num1 % num2;
                    printf("Result: %d\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid operator. Exiting...\n");
                return 0;
        }
    }

    return 0;
}

