#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/** Compile time initialisation **/

struct employee // removing employee also works
{
    int emp_id;
    char name[50];
    int age;
    char gender;
};
s1 = {100,"Thushar",25,'M'},s2 = {200,"Rakshitha",23,'F'}; // valid

struct employee s3 = {300,"Raksha",24,'F'}; // valid


void main()
{
    struct employee s4 = {400,"Abhishek",20,'M'}; // valid

    struct employee s5;
    s5 = s3,s2,s1;  // s5 = (s1,s2,s3);

    s5.emp_id = 670;
    strcpy(s5.name, "Akshay");
    s5.age = 20;
    s5.gender = 'M';

    printf("The id of the employee is:%d\n",s5.emp_id);
    printf("The name of the employee is:%s\n",s5.name);
    printf("The age of the employee is:%d\n",s5.age);
    printf("The gender of the employee is:%c\n",s5.gender);

    /** NOTE - The order of the datatype must always match
    and you cant have partial initialisations **/
}
