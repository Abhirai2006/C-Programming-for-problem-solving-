#include<stdio.h>

float squareRoot(float n)
{
    float x = n;
    float y = 1.0;
    float e = 0.000001; // Precision level

    while(x - y > e)
    {
        x = (x + y) / 2;
        y = n / x;
    }

    return x;
}

int main()
{
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);

    if (n < 0)
        printf("Square root of negative number is not real.\n");
    else
        printf("Square root of %.0f is %.0f\n", n, squareRoot(n));

    return 0;
}

