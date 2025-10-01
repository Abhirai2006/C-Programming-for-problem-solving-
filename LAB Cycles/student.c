#include<stdio.h>

int age;
char name[20];
void get_details()
{
    scanf("%d%s",&age,&name);
}

void show_details()
{
    printf("The name of the student is:%s\n",name);
    printf("The age of the student is:%d\n",age);
}

void main()
{
    int n;
    printf("Enter the number of students:\n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        get_details();
        show_details();
    }
}
