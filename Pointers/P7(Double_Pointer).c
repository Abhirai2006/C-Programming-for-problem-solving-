#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a:\n"); // 100
    scanf("%d",&a);
    int *b = &a;
    printf("The value of a is:%d\n",a); // 100
    printf("The value of a is:%d\n",*(b)); // 100
    printf("The address of a is:%x\n",b); // address of a
    printf("The address of a is:%x\n",&a); // address of a
    int **c = &b;// c cant contain address of a int **c = &a
    printf("The address of b is:%x\n",&b); // address of b
    printf("The address of b is:%x\n",c); // address of b
    printf("The value of a is:%d\n",*(*c));  // 100
    int ***d = &c;
    printf("The value of a is:%d\n",*(*(*d))); // 100
    ***d = 900;
    printf("The value of a is:%d\n",*(*c));// 900
    printf("The value of a is:%d\n",*(*(*d))); // 900

}
