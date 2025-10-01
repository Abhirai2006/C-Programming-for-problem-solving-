#include<stdio.h>
#include<conio.h>
#define MAX 100
void main()
{

    float base, height;
    printf("Enter the base and height of the triangle");
    scanf("%f%f", &base,&height);
    float area = (0.5 * base * height);
    printf("The area is: %f", area);
}
