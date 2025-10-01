#include <stdio.h>
#include <conio.h>

int a = 100;
void print()
{
    printf("The value of the global variable is:%d\n",a);
}

void main() {
   int a = 200;
   printf("The value of the local variable is:%d\n",a);
   print();
}
