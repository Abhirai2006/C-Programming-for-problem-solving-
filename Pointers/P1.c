#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    int *ptr = &a;
    printf("The value of a is:%d\n",a); // 10
    printf("The address of a is:%x\n",&a);  // address of a
    printf("The address of a using p is:%x\n",ptr); // address of a
    printf("The value of a using p is:%d\n",*(ptr));  // Dereference operator
    printf("The value of ptr is:%x\n",&ptr); // &ptr to get the address of ptr

}
