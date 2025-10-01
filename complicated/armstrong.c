#include<stdio.h>
void main()
{
    int n,count = 0,sum,answer = 0, last;
    printf("Enter the number to find whether it is an armstrong number or not:\n");
    scanf("%d",&n);
    int temp = n;
    int temp1 = n;
    while(n!=0)
    {
        n /= 10; // n= n/10;
        count++;
    }
    printf("The number of digits in the number are:%d\n",count);

    while(temp!=0)
    {
        last = temp%10;
        sum = 1;
        for(int i=0; i<count; i++)
        {
            sum = sum * last;
        }
        temp = temp/10;
        answer = answer + sum;
    }
    printf("The answer is:%d\n",answer);
    if(temp1 == answer)
    {
        printf("Entered number %d is an armstrong number.\n",temp1);
    }
    else
    {
        printf("Entered number %d is not an armstrong number.\n",temp1);
    }
}
