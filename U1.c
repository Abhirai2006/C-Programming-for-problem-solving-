#include<stdio.h>
#include<stdlib.h>
union demo
{
    int a;
    float b;
    char c;
};
void main()
{
    union demo *ptr = (union demo*)malloc(sizeof(union demo));
    if(ptr == NULL)
        printf("Memory allocation failed.\n");
    else
        printf("Memory allocated successfully.\n");

    printf("%x\n",&(ptr->a));
    scanf("%d",&(ptr->a));
    scanf("%f",&(ptr->b));
    scanf(" %c",&(ptr->c));

    printf("a = %d, b = %.2f, c = %c",(ptr->a),(ptr->b),(ptr->c));
    free(ptr);
}
