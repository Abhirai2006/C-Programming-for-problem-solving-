#include <stdio.h>

void main()
{
    int a[] = {2, 4, 3, 0, -7};
    int b[] = {3, 8, 6, 2, 0};
    int *p = a;
    int *q = &a[3];
    int *ptr = &b;

    printf("q - p = %d\n", q - p); // 3
    printf("p - q = %d\n", p - q);  // -3
    printf("value = %d\n", *q); // 0

    q = q - 2;
    printf("value = %d\n", *q); // 4

    p = p + 2;
    printf("q - p = %d\n", q - p); // 3

    q = q - 2;
    printf("value = %d\n", *q); // GV
}

