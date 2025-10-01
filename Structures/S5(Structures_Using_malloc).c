#include<stdio.h>
#include<stdlib.h>

struct employee
{
    int emp_id;
    char name[50];
    int age;
    char gender;
};


void main()
{
    int n;
    printf("Enter the number of students:\n");
    scanf("%d",&n);

    struct employee* ptr = (struct employee*)malloc(n * sizeof(struct employee));

    if(ptr == NULL)
        printf("Memory allocation failed.\n");
    else
        printf("The base address which ptr is holding is %p\n",(void*)ptr);

    for(int i=0; i<n; i++)
    {
        scanf("%d%s%d %c",&ptr->emp_id,&ptr->name,&ptr->age, &ptr->gender);
    }

    for(int i=0; i<n; i++)
    {
        printf("%d,%s,%d,%c",ptr->emp_id,(*ptr).name,ptr->age,(*ptr).gender);
    }

}
