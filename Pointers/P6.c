/** Incompatible data type conversion **/

#include<stdio.h>
void main()
{
    float a = 10;
    float *ptr;
    ptr = &a;
    printf("ptr=%.2f",*ptr);
}
