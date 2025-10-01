#include<stdio.h>
void main()
{
    int a = 10, b = 5;
    int *p = &a;
    int *q = &b;
    // *q = *p;
    printf("a=%d %d %d",a,*p,*q); // 10 10 and 5, uncomment line 7 you will get 10 10 10
}
