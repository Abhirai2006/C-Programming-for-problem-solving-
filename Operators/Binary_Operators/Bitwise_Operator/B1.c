#include<stdio.h>
#include<conio.h>

void main()
{
    int n1,n2;
    printf("Enter the values for n1 and n2:\n");
    scanf("%d%d",&n1,&n2);
    int n3 = n1 & n2;
    int n4 = n1 | n2;
    int n5 = n1 ^ n2;
    int n6 = ~n2;
    int n7 = -10 >> 2;
    printf("%d\n",n7);
    printf("%d\n%d\n%d\n%d",n3,n4,n5,n6);
}
