#include<stdio.h>
void main()
{
    const int a = 10;
    const int *ptr = &a;
    printf("a=%d\n",*ptr);

    *ptr = 20;
     printf("a=%d\n",*ptr);
}
