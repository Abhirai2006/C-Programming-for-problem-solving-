#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,max;
    printf("Enter the values for a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The greatest number among %d, %d and %d is:%d",a,b,c,max);

}
