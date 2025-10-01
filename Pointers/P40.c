
#include <stdio.h>
void main()
{
    int arr[] = {5, 10, 15, 20, 25, 30};
    int *p = arr + 1;
    int *q = arr + 4;

    int a = *p++ + *--q - *p;
    int b = *q-- + *(p++) + *(--q) - *p;
    int c = *(q + 1) - *(p - 1) + *p++ - *--q;
    int d = *p + *q + *(p + 1) - *(q - 1);
    int e = *--p + *q-- - *(p++) + *(++q);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);
}
/**

void main()
{
    int arr[] = {3, 6, 9, 12, 15, 18, 21};
    int *p = arr + 2;
    int *q = arr + 5;

    int x = *p++ + *--q - *p++ + *(--q) - *(p--) + *(++q);
    int y = *(--p) + (*q-- - *(p++)) + *(q--) - *(--p) + *p;
    int z = *++p - *--q + (*p++ - *q--) + *(p-- + 1) - *(q + 2);
    int w = (*p + *q) - (*--p + *++q - *p--) + *(--q) + *p;
    int t = *++p + *q-- - *--q + *(p + 1) - *(--p) + *q;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("w = %d\n", w);
    printf("t = %d\n", t);
}
**/
