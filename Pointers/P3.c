#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int a,b;
    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("The values before swapping are a = %d and b = %d\n",a,b);
    swap(&a, &b);
    printf("The values after swapping are a = %d and b = %d\n",a,b);
}
