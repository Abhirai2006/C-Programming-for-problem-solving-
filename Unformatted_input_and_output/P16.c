#include<stdio.h>
void main()
{
    char name[20];
    printf("Enter a name:\n");
    fgets(name, sizeof(name), stdin);
    printf("You entered:\n%s",name);
}
