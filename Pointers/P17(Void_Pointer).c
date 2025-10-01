#include<stdio.h>

void main()
{
    int a; float b; char ch;
    int *ptr1; float *ptr2; char *ptr3;

    printf("Enter the values for a, b and ch:\n");
    scanf("%d %f %c", &a, &b, &ch);

    printf("The entered values are a=%d, b=%.2f, ch=%c", a, b, ch);

    ptr1 = &a;
    ptr2 = &b;
    ptr3 = &ch;

    printf("\nUsing normal pointers:");
    printf("\na = %d", *ptr1);
    printf("\nb = %.2f", *ptr2);
    printf("\nch = %c", *ptr3);

    // Using void pointer
    void *vp;

    printf("\nUsing void pointer:");

    vp = &a;
    printf("\na = %d", *(int*)vp);

    vp = &b;
    printf("\nb = %.2f", *(float*)vp);

    vp = &ch;
    printf("\nch = %c", *(char*)vp);

    // You cannot dereference a void pointer as memory allocated to void is nothing.
    // malloc and calloc return void pointers in that we can store anything.
}
