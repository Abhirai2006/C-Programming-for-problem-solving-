#include<stdio.h>
void main()
{
    char ch,word[10];
    int i = 0;
    printf("Enter characters:\n");
    while(1)
    {
        ch = getchar();
        word[i] = ch;
        if(ch == '\n')
            break;
        i++;
    }
    printf("\nYou entered the word:%s",word);
}
