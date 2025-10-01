#include<stdio.h>
int add(int *a, int *b, int c, int d)
{
    int sum = *a + *b + c + d;
    printf("The sum is:%d",sum);
}
void main()
{
    int a,b,c,d;
    printf("Enter the values of a,b,c and d:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int *ptr;
    ptr = &d;
    add(&a,&b,c,*ptr);
}

