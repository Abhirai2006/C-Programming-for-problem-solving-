#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    void *ptr1 = (int*)calloc(n,sizeof(int));
    if(ptr1 == NULL)
        printf("Memory allocation failed.\n");
    else
        printf("The base address of the memory block is:%p\n",(void*)ptr1);

    for(int i=0; i<n; i++)
    {
        printf("Enter the value at ptr1[%d]:",i);
        scanf("%d", ((int *)ptr1 + i));
    }

    for(int i=0; i<n; i++)
    {
        printf("The value at ptr1[%d] is:%d\n",i, *((int*)ptr1 + i));
    }

    free(ptr1);
    ptr1 = NULL;

    ptr1 = (float*)malloc(n*sizeof(float));
    if(ptr1 == NULL)
        printf("Memory allocation failed.\n");
    else
        printf("The base address of the memory block is:%p\n",(void*)ptr1);


    printf("Enter the updated value of n:\n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("Enter the value at ptr1[%d]:",i);
        scanf("%f", ((float *)ptr1 + i));
    }

    for(int i=0; i<n; i++)
    {
        printf("The value at ptr1[%d] is:%.2f\n",i, *((float*)ptr1 + i));
    }

    free(ptr1);
}
