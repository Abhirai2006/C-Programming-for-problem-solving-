#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2, d = 4;

    // Following BODMAS (the way people might think math works)
    int bodmas_result = a + b * c / d;  // BODMAS logic: multiplication first, then division, then addition

    // Following C's operator precedence and associativity
    int precedence_result = a + (b * (c / d));  // C's rules: division first, then multiplication, then addition

    // Display results
    printf("BODMAS logic result: %d\n", bodmas_result);          // 10 + 5 * 2 / 4 => 10 + 10 / 4 => 10 + 2 => 12
    printf("Operator precedence result: %d\n", precedence_result); // 10 + (5 * (2 / 4)) => 10 + (5 * 0) => 10 + 0 => 10

    return 0;
}
