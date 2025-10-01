#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    printf("Enter the values for a and b:\n");
    scanf("%d %d",&a, &b);
    if (a>b)
    {
        printf("%d is the greatest.",a);
    }
    else if (b>a)
    {
       printf("%d is the greatest.",b);
    }
    else
    {
        printf("%d and %d are equal.",a,b);
    }

}
