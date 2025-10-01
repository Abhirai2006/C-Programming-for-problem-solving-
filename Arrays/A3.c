#include<stdio.h>
void main()
{
    int matrix[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {'A',"Thushar",'@',43.87f}
    };

    printf("%s",matrix[2][1]);
}
