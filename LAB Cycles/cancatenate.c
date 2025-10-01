#include<stdio.h>
#include<string.h>

void cancatenate(char a[20], char b[20], char c[20]) {
    char name[60];  // increased size to hold concatenated result
    strcpy(name, a);
    strcat(name, b);
    strcat(name, c);
    printf("%s\n", name);
}

void main() {
    char a[20], b[20], c[20];
    printf("Enter the three strings:\n");
    scanf("%s %s %s", a, b, c);
    cancatenate(a, b, c);
}
