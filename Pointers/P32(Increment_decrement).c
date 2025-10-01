#include<stdio.h>
void main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // points to arr[0]

    printf("Original ptr: %p, *ptr = %d\n", (void*)ptr, *ptr); // location and 10

    printf("Value at *ptr++ = %d\n", *ptr++);  // returns *ptr, then ptr++ 10 and *ptr++
    printf("After *ptr++: ptr points to %p, *ptr = %d\n", (void*)ptr, *ptr); // 20

    ptr = arr; // reset
    printf("Value at *++ptr = %d\n", *++ptr);  // ptr++, then return *ptr 20

    ptr = arr + 4; // points to last element // 50
    printf("Value at *ptr-- = %d\n", *ptr--);  // returns *ptr, then ptr-- // 50
    printf("After *ptr--: *ptr = %d\n", *ptr); // 40

    ptr = arr + 4;
    printf("Value at *--ptr = %d\n", *--ptr);  // ptr--, then return *ptr // 40

    return 0;
    */


    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("%d\n", ++(*ptr));   // pre-increment: becomes 11, prints 11
    printf("%d\n", (*ptr)++);   // post-increment: prints 11, then becomes 12
}

