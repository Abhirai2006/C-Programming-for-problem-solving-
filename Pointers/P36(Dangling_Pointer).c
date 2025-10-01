#include<stdio.h>
#include<stdlib.h>

int *f()
{
    int a = 10; // static int a = 10; will have global scope.
    return &a;
}
void main()
{
    // Case 1 of dangling pointer
    int *ptr1 = (int*)malloc(sizeof(int));
    *ptr1 = 10;
    printf("%d\n",*ptr1);
    free(ptr1);
    ptr1 = NULL; // Solution to avoid dangling pointer but now you dereference a dangling pointer
    printf("%d\n",*ptr1); // Dangling pointer ptr1

    printf("----------------------------------------\n");

    // Case 2 of dangling pointer
    int *ptr2;
    {
        int a = 102; // a has local scope and cant be used outside the block.
        ptr2 = &a;
        printf("%d\n",*ptr2);
    }
    ptr2 = NULL;
    printf("%d\n",*ptr2); // Maybe for some it will have the value .

    // After the execution of this block ptr2 will become a dangling pointer.


    printf("----------------------------------------\n");

    // Case 3 of dangling pointer
    int *ptr3 = f();
    printf("%d\n",*ptr3); // After the execution of the function f() ptr3 is a dangling pointer.
    ptr3 = NULL;


}
