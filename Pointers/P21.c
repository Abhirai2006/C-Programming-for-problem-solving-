#include<stdio.h>
void main()
{
    int a = 10, b = 11;
    int *p,*q;
    p = &a;  // 10
    q = &b; // 11
   //*q = *p; // 10
    printf("a=%d %d %d",a,*p,*q);
}
