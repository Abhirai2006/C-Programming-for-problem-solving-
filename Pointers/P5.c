#include<stdio.h>
void main()
{
    int a = 10, b = 5;
    int *p,*q;
    p = &a;
    q = &b;
    *q = *p; // comment and show 10 10 5
    //q = p; // *q = *p; error because q is not initialized.
    printf("a=%d %d %d",a,*p,*q);
}
