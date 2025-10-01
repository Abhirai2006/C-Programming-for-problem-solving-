#include<stdio.h>
#include<conio.h>
void main()
{

    printf("The size of short data type in a 32 bit machine is:%hd bytes\n",sizeof(short));


    /*
    short a = 32768;
    printf("%hd\n",a);
    printf("%hu",a);  // printf("%hu",a);
    */


    /*
    short b = 32770;
    printf("%hd",b); // printf("%hu",b);
    */


    /*
    short c = -10;
    printf("%hd\n",c);
    printf("%hu\n",c);
    */



    unsigned short a = -32769;
    printf("%hd\n",a);
    printf("%hu",a);

}
