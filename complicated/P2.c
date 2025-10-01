#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int discriminant;
    float root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // Map discriminant to 1, 0, or -1
    switch ((discriminant > 0) - (discriminant < 0)) {
        case 1:
            // Two distinct real roots
            root1 = (-b + sqrt(discriminant)) / (2.0 * a);
            root2 = (-b - sqrt(discriminant)) / (2.0 * a);
            printf("Roots are real and distinct.\n");
            printf("Root1 = %.2f and Root2 = %.2f\n", root1, root2);
            break;

        case 0:
            // One repeated real root
            root1 = root2 = -b / (2.0 * a);
            printf("Roots are real and equal.\n");
            printf("Root = %.2f\n", root1);
            break;

        case -1:
            // Complex roots
            realPart = -b / (2.0 * a);
            imagPart = sqrt(-discriminant) / (2.0 * a);
            printf("Roots are complex and imaginary.\n");
            printf("Root1 = %.2f + %.2fi and Root2 = %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
            break;
    }

    return 0;
}
