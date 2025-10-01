#include<stdio.h>
#include<stdlib.h>

int *f()
{
    int a = 10; // Use static to avoid dangling pointer
    return &a;
}

int main()
{
    // Case 1 of dangling pointer
    int *ptr1 = (int*)malloc(sizeof(int));
    *ptr1 = 10;
    printf("%d\n", *ptr1);
    free(ptr1);
    ptr1 = NULL;
    if (ptr1 != NULL)
        printf("%d\n", *ptr1); // Safe: won't execute

    printf("----------------------------------------\n");

    // Case 2 of dangling pointer
    int *ptr2;
    {
        int a = 102;
        ptr2 = &a;
        printf("%d\n", *ptr2);
    }
    // ptr2 now points to invalid memory
    // Don't dereference it; just null it for safety
    ptr2 = NULL;
    if (ptr2 != NULL)
        printf("%d\n", *ptr2);

    printf("----------------------------------------\n");

    // Case 3 of dangling pointer
    int *ptr3 = f();
    printf("%d\n", *ptr3); // Safe now because of static variable
    ptr3 = NULL;

    return 0;
}

