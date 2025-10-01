#include<stdio.h>
#include<stdlib.h>

int display(int *n)
{
    int* ptr = (int*)malloc(*n * sizeof(int));
    if(ptr == NULL)
        printf("Memory allocation failed.\n");
    else
        printf("The memory allocated to ptr is %p\n",(void*)ptr);
    for(int i=0; i<*n; i++)
    {
        printf("Enter the element in the location ptr[%d]:",i);
        scanf("%d", ptr + i);
    }
    return ptr;
}

void main()
{
    int n;
    printf("Enter the size of n:\n");
    scanf("%d",&n);
    int *ptr = display(&n);
    for(int i=0; i<n; i++)
    {
        printf("The element at the location ptr[%d] is:%d\n",i, *(ptr + i));
    }

    free(ptr);
    ptr = NULL;
}
