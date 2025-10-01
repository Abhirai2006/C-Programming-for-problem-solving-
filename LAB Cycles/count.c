#include<stdio.h>
void main()
{
    int num,count = 0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int temp = num;
    while(num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("The number of digits in the number %d is %d",temp,count);
}
