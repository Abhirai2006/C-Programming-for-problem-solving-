#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    printf("Enter the values for a and b:\n");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("%d is the greatest.\n",a);
    }
    else
    {
        printf("%d is the greatest.\n",b);
    }
}

