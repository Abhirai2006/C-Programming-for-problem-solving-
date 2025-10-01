#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    int *p,*q;
    p = &a;
    q = &b;
    int c = *q;
    printf("The value of a is:%d and the value of b is:%d\n",a,b); // 10 20
    printf("The value of a is:%d and the value of b is:%d\n",*p,*q); // 10 20
    printf("The address of a is:%x and the address of b is:%x\n",&a,&b);
    printf("The address of a is:%x and the address of b is:%x\n",p,q);
    printf("The address of p is:%x and the address of q is:%x\n",&p,&q);
    printf("The value of c is:%d\n",c);

   /* p = &a,&b; p = (&a,&b)
    p = &a
    p = &b
    p = &a
    q = &a */

}
