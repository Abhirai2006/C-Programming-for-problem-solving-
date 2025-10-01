#include<stdio.h>
#include<conio.h>

// Unary minus operators inverts the symbol of a  number or a value
void main()
{
    int a = 5;
    printf("%d\n",a);


    int b = 10;
    int c = a+(-b);
    printf("%d\n",c);
    a = -c; // -c
    printf("%d",a);

}
