#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n1,n2;
    printf("Enter the values for n1 and n2:\n");
    scanf("%d%d",&n1,&n2);

    int *ptr1 = (int*)calloc(n1,sizeof(int)); // 5
    if(ptr1 == NULL)
        printf("Memory allocation failed.\n");
    else
        printf("The base address which ptr1 is holding is:%p\n",(void*)ptr1);


    printf("Enter the input.\n");
    for(int i=0; i<n1; i++)
        scanf("%d",(ptr1 + i));

    printf("The output is:\n");
    for(int i=0; i<n1; i++)
        printf("%d ",*(ptr1 + i));
    printf("\n");

    // reallocating memory

    int *ptr2 = (int*)realloc(ptr1,n2*sizeof(int)); //  ptr1 = (int*)realloc(ptr1,n2*sizeof(int));
    if(ptr2 == NULL)
        printf("Memory allocation failed.\n");
    else
        printf("The base address which ptr1 is holding is:%p\n",(void*)ptr2);


        printf("Enter the input.\n");
    for(int i=n1; i<n2; i++)
        scanf("%d",(ptr2 + i));

    printf("The output is:\n");
    for(int i=0; i<n2; i++)
        printf("%d ",*(ptr2 + i));

    printf("\nThe memory address of ptr1 and ptr2 are:%p and %p",ptr1,ptr2);

    free(ptr2);
}
