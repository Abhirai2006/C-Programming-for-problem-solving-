#include<stdio.h>
void main()
{
    char a[5] = {'1', '4', '2', '-8', '0'};
    char *p = &a[0];
    printf("value is: %c\n", *p);
    printf("address of element is: %u\n", p);
    p = p + 1;
    printf("value is: %c\n", *p);
    printf("address of element is: %u\n", p);
}

