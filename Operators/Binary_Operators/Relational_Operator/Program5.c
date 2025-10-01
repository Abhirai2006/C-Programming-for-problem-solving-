#include <stdio.h>

void main() {
    char ch1 = '+', ch2 = '+';
    printf("ch1 = %c, ch2 = %c\n", ch1, ch2);
    printf("ch1 == ch2 : %d\n", ch1 == ch2);
    printf("ch1 != ch2 : %d\n", ch1 != ch2);
    printf("ch1 > ch2  : %d\n", ch1 > ch2);
    printf("ch1 < ch2  : %d\n", ch1 < ch2);
    printf("ch1 >= ch2 : %d\n", ch1 >= ch2);
    printf("ch1 <= ch2 : %d\n", ch1 <= ch2);
    printf("%d\n", '<' <= '<');
    printf("%d\n", '=' != '=');
}

