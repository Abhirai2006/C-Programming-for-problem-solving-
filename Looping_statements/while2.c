#include <stdio.h>

int main() {
    int num;

    printf("Enter numbers (0 to stop):\n");
    scanf("%d", &num);

    while (num != 0) {
        printf("You entered: %d\n", num);
        scanf("%d", &num);
    }

    printf("Exited loop.\n");

    return 0;
}

