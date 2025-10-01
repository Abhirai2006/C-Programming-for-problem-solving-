#include <stdio.h>

int main() {
    int n, temp, temp1, count = 0, sum = 0;

    printf("Enter the number you want to check if it is an Armstrong number or not:\n");
    scanf("%d", &n);

    temp = n;
    printf("\n%d",n);
    printf("\n%d",temp);
    temp1 = temp;
    printf("\n%d\n",temp1);


    // Counting number of digits
    while (n != 0) {
        n = n / 10;
        count++;
    }

    if (count > 2) {
        printf("The total number of digits in the entered number are: %d\n", count);

        while (temp != 0) {
            int prod = 1;
            int rem = temp % 10;

            for (int i = 1; i <= count; i++) {
                prod = rem * prod;
            }

            temp /= 10;
            sum = sum + prod;
        }

        if (sum == temp1) {
            printf("%d is an Armstrong number.\n", temp1);
        } else {
            printf("%d is not an Armstrong number.\n", temp1);
        }
    } else {
        printf("%d cannot be an Armstrong number.\n", temp1);
    }

    return 0;
}
