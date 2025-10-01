#include<stdio.h>
#include<conio.h>
void main()
{
    char ch[10];
    printf("Enter the name:\n");
    for(int i=0;i<10;i++)
    {
        ch[i] = getchar();
    }
    printf("The entered name is:%s",ch);
}
