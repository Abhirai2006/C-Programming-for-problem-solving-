#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    int *p = &a;
    printf("a=%d,%d",a,*p);
    int *q = &a;
   // p + q; invalid
   // *p + *q; valid
   p = p + 1;
   printf("\na=%d,%d",a,*p);
}
