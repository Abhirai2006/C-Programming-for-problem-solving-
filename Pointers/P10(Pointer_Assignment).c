#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the values for a and b:\n");
    scanf("%d%d",&a,&b);
    // case 1
    printf("A=%d,B=%d",a,b); // 10 20
    int *p,*q;
    p = &a; // 10
    q = p; // 10
    q = &b; // 20
    // case 2
    *p = 34;
    //*p = *q;
    *q = *p;
    printf("\nValue of a is:%d,Value of b is:%d",*p,*q);
}
