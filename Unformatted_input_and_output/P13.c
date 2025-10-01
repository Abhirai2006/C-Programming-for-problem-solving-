#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character:\n");
    ch = getchar();
    printf("You entered:\n"); // you can also use puts()
    putchar(ch);
}
