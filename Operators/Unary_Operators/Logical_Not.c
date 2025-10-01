#include<stdio.h>
#include<stdbool.h>
void main()
{
    int i = 100;
    bool a = true;
    int x = 100, y = 20;
    a = !(x>y);
    printf("%d\n",a); // 1 if true 0 if false
    printf("The size is:%d\n",sizeof(a));

    // address of operator will be dealt when we are doing pointers.
    // sizeof returns the size of a datatype.

    int *ptr = &i;
    printf("The address is: %p\n",ptr);  // %p for pointers

}
