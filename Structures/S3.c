/** Run time initialisation of structures **/

#include<stdio.h>
#include<stdlib.h>

struct professor
{
    int age;
    char name[50];
    char gender;
    float salary;
};

struct professor p;
void main()
{
    printf("Enter the age of the professor:\n");
    scanf("%d",&p.age);
    printf("Enter the name of the professor:\n");
    scanf("%s",p.name);
    printf("Enter the gender of the professor:\n");
    scanf(" %c",&p.gender);
    printf("Enter the salary of the professor:\n");
    scanf("%f",&p.salary);
    printf("The age of the professor is:%d\n",p.age);
    printf("The name of the professor is:%s\n",p.name);
    printf("The salary of the professor is:%.2f\n",p.salary);
    printf("The gender of the professor is:%c\n",p.gender);

}
