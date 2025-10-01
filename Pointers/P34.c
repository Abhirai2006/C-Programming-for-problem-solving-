#include <stdio.h>

void main()
{
    char str[] = "Welcome to amini's lectures";
    char *ptr;
    ptr = str;

    printf("%c\n", *ptr);
    printf("ptr address=%u\n", ptr);
    printf("%c\n", *(ptr++ + 1));
    printf("ptr address=%u\n", ptr);
    printf("%c\n", *((ptr-- + 5) - 1) + 3); // p
    printf("ptr address=%u\n", ptr);
    printf("%c\n", *(++ptr + 10) - 32);
    // This trick (subtracting 32) is often used to convert lowercase letters to uppercase in ASCII.
    printf("%c %c %c\n", *ptr, *++ptr, *--ptr);
}

