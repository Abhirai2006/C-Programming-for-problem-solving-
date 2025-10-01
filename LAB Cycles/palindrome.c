#include<stdio.h>
void main()
{
    int num,temp,rev = 0,remainder;
    printf("Enter the number to check whether it is palindrome or not:\n");
    scanf("%d",&num);
    temp = num;
    // printf("%d and %d",num,temp);
    while(num!=0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num / 10;
    }
    if(temp == rev)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");
}
