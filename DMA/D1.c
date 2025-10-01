#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("Enter the size of n:\n");
    scanf("%d",&n);

    int *ptr;
    ptr = (int*)calloc(n , sizeof(int));
    printf("%x\n",ptr);

    if(ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }


    for(int i=0; i<n; i++)
    {
        printf("The %d integer at location %d is:%d\n",(i+1), i, *(ptr + i));
    }

    free(ptr);
}
