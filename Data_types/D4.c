#include <stdio.h>
#include <limits.h>

int main() {
    printf("Integer Type Information in C\n\n");

    // Signed integers
    printf("Signed Integers:\n");
    printf("Type          Size (bytes)       Min value                Max value               Format Specifier\n");
    printf("short         %lu                %d                      %d                      %%hd\n",
           sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("int           %lu                %d                      %d                      %%d\n",
           sizeof(int), INT_MIN, INT_MAX);
    printf("long          %lu                %ld                     %ld                     %%ld\n",
           sizeof(long), LONG_MIN, LONG_MAX);
    printf("long long     %lu                %lld                    %lld                    %%lld\n\n",
           sizeof(long long), LLONG_MIN, LLONG_MAX);

    // Unsigned integers
    printf("Unsigned Integers:\n");
    printf("Type          Size (bytes)       Min value                Max value               Format Specifier\n");
    printf("unsigned short%lu                0                        %u                      %%hu\n",
           sizeof(unsigned short), USHRT_MAX);
    printf("unsigned int  %lu                0                        %u                      %%u\n",
           sizeof(unsigned int), UINT_MAX);
    printf("unsigned long %lu                0                        %lu                     %%lu\n",
           sizeof(unsigned long), ULONG_MAX);
    printf("unsigned long long%lu            0                        %llu                    %%llu\n\n",
           sizeof(unsigned long long), ULLONG_MAX);

    // Taking input for all types
    short s; int i; long l; long long ll;
    unsigned short us; unsigned int ui; unsigned long ul; unsigned long long ull;

    printf("Enter a signed short: "); scanf("%hd", &s);
    printf("Enter a signed int: "); scanf("%d", &i);
    printf("Enter a signed long: "); scanf("%ld", &l);
    printf("Enter a signed long long: "); scanf("%lld", &ll);

    printf("Enter an unsigned short: "); scanf("%hu", &us);
    printf("Enter an unsigned int: "); scanf("%u", &ui);
    printf("Enter an unsigned long: "); scanf("%lu", &ul);
    printf("Enter an unsigned long long: "); scanf("%llu", &ull);

    // Display inputs
    printf("\nValues entered:\n");
    printf("Signed short: %hd\n", s);
    printf("Signed int: %d\n", i);
    printf("Signed long: %ld\n", l);
    printf("Signed long long: %lld\n", ll);
    printf("Unsigned short: %hu\n", us);
    printf("Unsigned int: %u\n", ui);
    printf("Unsigned long: %lu\n", ul);
    printf("Unsigned long long: %llu\n", ull);

    return 0;
}

