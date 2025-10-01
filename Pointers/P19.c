#include<stdio.h>
void main()
{
    int a = 10,b = 20;
    int *p,*q;
    p = &a;
    //q = p;
   // q = &b;
    //*q = *p;
    printf("a=%d %d %d",a,*p,*q);
}
