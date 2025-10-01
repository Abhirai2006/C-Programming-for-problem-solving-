#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    int count = 0;
    printf("Enter the number you want to find whether is prime or not:\n");
    scanf("%d",&n);
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i == 0) // if(n%2 == 0)
        {
            count++;
            break;
        }
    }

    if(count!=0)
    {
        printf("%d is not a prime number.\n",n);
    }
    else
    {
        printf("%d is a prime number.\n",n);
    }
}
