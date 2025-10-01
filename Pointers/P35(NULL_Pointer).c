#include <stdio.h>

// Function that accepts a pointer and checks if it's NULL
void display(int *p)
{
    if (p == NULL)
    {
        printf("Case 5: display() received a NULL pointer.\n");
    }
    else
    {
        printf("Case 5: display() received value = %d\n", *p);
    }
}

void main()
{
    // Case 1: Declaring and initializing a NULL pointer
    int *ptr1 = NULL;
    if (ptr1 == NULL)
    {
        printf("Case 1: ptr1 is NULL (does not point to any memory).\n");
    }

    // Case 2: Declaring an uninitialized pointer (garbage value)
    int *ptr2;
    printf("Case 2: ptr2 is uninitialized and may contain garbage: %p\n", (void*)ptr2);

    // Comparing uninitialized pointer to NULL
    if (ptr2 == NULL)
    {
        printf("Case 2: ptr2 seems to be NULL (rare, but possible by coincidence).\n");
    }
    else
    {
        printf("Case 2: ptr2 is NOT NULL (dangerous to dereference).\n");
    }

    // Case 3: Safe dereferencing after NULL check
    int x = 100;
    int *ptr3 = NULL;
    if (ptr3 != NULL)
    {
        printf("Case 3: ptr3 value = %d\n", *ptr3);
    }
    else
    {
        printf("Case 3: ptr3 is NULL, dereferencing skipped to avoid crash.\n");
    }

    // Case 4: Assign valid address to NULL pointer and use it
    ptr3 = &x;
    if (ptr3 != NULL)
    {
        printf("Case 4: ptr3 now points to x, value = %d\n", *ptr3);
    }

    // Case 5: Passing NULL to a function
    display(&x);

    // Case 6: Comparison between two NULL pointers
    int *p1 = NULL;
    int *p2 = NULL;
    if (p1 == p2)
    {
        printf("Case 6: Two NULL pointers are equal.\n");
    }
    else
    {
        printf("Case 6: NULL pointers are not equal (unexpected).\n");
    }

    // Case 7: Comparing uninitialized pointer with another (undefined behavior)
    int *p3, *p4;
    printf("Case 7: p3 = %p, p4 = %p (garbage values)\n", (void*)p3, (void*)p4);
    if (p3 == p4)
    {
        printf("Case 7: Uninitialized pointers are equal (by coincidence).\n");
    }
    else
    {
        printf("Case 7: Uninitialized pointers are not equal (normal case).\n");
    }

    // Case 8: They can also be initialised with zeroes

    int *ptr4 = 0;
    printf("The value is:%x",ptr4);
}
