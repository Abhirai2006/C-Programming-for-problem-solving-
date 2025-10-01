#include <stdio.h>

int main() {

    short int s = -32768;
    unsigned short int us = 65535;
    int i = -2147483648;
    unsigned int ui = 4294967295U;
    long int l = -2147483648L;
    unsigned long int ul = 4294967295UL;
    long long int ll = -9223372036854775807LL;
    unsigned long long int ull = 18446744073709551615ULL;

    printf("Short int: %hd\n", s);
    printf("Unsigned short int: %hu\n", us);
    printf("Int: %d\n", i);
    printf("Unsigned int: %u\n", ui);
    printf("Long int: %ld\n", l);
    printf("Unsigned long int: %lu\n", ul);
    printf("Long long int: %lld\n", ll);
    printf("Unsigned long long int: %llu\n", ull);


    printf("Size of short int: %lu bytes\n", sizeof(short int));
    printf("Size of unsigned short int: %lu bytes\n", sizeof(unsigned short int));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));
    printf("Size of long int: %lu bytes\n", sizeof(long int));
    printf("Size of unsigned long int: %lu bytes\n", sizeof(unsigned long int));
    printf("Size of long long int: %lu bytes\n", sizeof(long long int));
    printf("Size of unsigned long long int: %lu bytes\n", sizeof(unsigned long long int));
}

