#include<stdio.h>
#include<conio.h>
void main()
{
    printf("The size of short is:%d\n",sizeof(short));
    printf("The size of integer is:%d\n",sizeof(int));
    printf("The size of floating value is:%d\n",sizeof(float));
    printf("The size of long is:%d\n",sizeof(long));
    printf("The size of double is:%d\n",sizeof(double));
    printf("The size of unsigned short is:%d\n",sizeof(unsigned short));
    printf("The size of signed short is:%d\n",sizeof(signed short));
    printf("The size of signed int is:%d\n",sizeof(signed int));
    printf("The size of unsigned int is:%d\n",sizeof(unsigned int));
    printf("The size of unsigned short int is:%d\n",sizeof(unsigned short int));
    printf("The size of signed short int is:%d\n",sizeof(signed short int));
    printf("The size of long long is:%d\n",sizeof(long long));
    printf("The size of double double is:%d\n",sizeof(long double));

    /*unsigned short a = 32768; // bu default it is always signed
    unsigned short b = 65537; // try all
    printf("%d\n",a);
    printf("%d\n",b);


    // We use %u for unsigned values

    signed short i = 32768;
    printf("%d\n",i); */

    short c = 32768; // Assigning 32768 to a short
    printf("%d\n", c); // Print as signed integer
    printf("%u\n", (unsigned short)c); // Print as unsigned integer
}
