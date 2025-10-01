#include<stdio.h>
#include<stdlib.h>
struct college
{
    int established;
    char name[50];

    struct professor
    {
        int pid;
        float salary;
        char department[60];
    }prof;
};

void main()
{
    int n;
    printf("Enter the number of colleges:\n");
    scanf("%d",&n);

    struct college *ptr = (struct college*)calloc(n, sizeof(struct college));
    if(ptr == NULL)
        printf("Memory allocation failed.\n");
    else
        printf("Memory allocated to ptr is:%p\n",(void*)ptr);

    // Take input

    for(int i=0; i<n; i++)
    {
        printf("Enter the details of the %d college:\n",i + 1);
        printf("Enter the established year:");
        scanf("%d",&ptr->established);
        printf("Enter the name of the college:");
        scanf("%s",&ptr->name);
        printf("Enter the id of the professor in %s:",ptr->name);
        scanf("%d",&ptr->prof.pid);
    }

    for(int i=0; i<n; i++)
    {
        printf("The established year of the %d college is:%d\n",i + 1,ptr->established);
        printf("The name of %d college is:%s\n",i + 1,ptr->name);
        printf("The id of the employee in %s college is:%d\n",ptr->name,ptr->prof.pid);
    }
}

