#include <stdio.h>

/*
int main()
{
    int a[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;
    p = a;

    printf("%d\n", *p);
    printf("%d %d %d\n", (*p)++, *p++, *++p);
    q = p + 3;
    printf("%d\n", *(q - 3)); // you are not storing it in any variable
    printf("%d\n", *--p + 5);
    printf("%d\n", *p + *q);

    return 0;
} */

#include <stdio.h>

int main()
{
    int a[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;
    p = a;
    q = &a[0] + 3;
    printf("%d\n",*q);

    printf("%d/%d/%d\n", (*p)++, (*p)++, *(++p));
    printf("%d\n", *p);
    printf("%d\n", (*p)++);
    printf("%d\n", (*p)++);

    q--;
    printf("%d\n",*q);

    printf("%d\n", (*(q + 2))--);
    printf("%d\n", *(p + 2) - 2);
    printf("The value is:%d\n",*p);
    printf("%d\n", *(p++ - 2) - 1); // undefined behaviour.
    printf("%d\n",*p);
    printf("%d\n",*q);


    /*
    int d = 10;
    printf("%d\n", (d++ - 2) - 1); // 7
    printf("%d\n",d);
    */

    return 0;
}


