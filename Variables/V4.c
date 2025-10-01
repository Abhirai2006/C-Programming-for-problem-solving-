#include <stdio.h>
#define PI 3.14

int add(int a) // Define the add function outside main
{
    a += 1;
    return a;
}

void main()
{
    float radius, side, length, breadth, base, height;
    printf("Enter the metrics:\n");
    scanf("%f%f%f%f%f%f",&radius,&side,&length,&breadth,&base,&height);
    printf("The area of the circle is:%.3f\nThe area of the square is:%.3f\n",(PI*radius*radius),(side*side));
    printf("The area of the triangle is:%.3f\nThe area of the rectangle is:%.3f\n",(0.5*base*height),(length*breadth));

    int a = 10;
    for(int i = 0; i < a; i = add(i)) // i = i+1
    {
        printf("%d\n", i);
    }
}
