#include<stdio.h>
#include<conio.h>
void main()
{
    char ch,ch2,ch3;
    printf("Enter a character\n");
    ch = getchar();
    printf("character = %c\n",ch);


    ch2 = getch();
    printf("character = %c\n",ch2);


    ch3 = getche();
    printf("\ncharacter = %c\n",ch3);
}
