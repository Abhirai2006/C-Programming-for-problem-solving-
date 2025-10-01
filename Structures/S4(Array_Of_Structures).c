/** Array of Structures **/
#include<stdio.h>
struct student
{
    int roll_no;
    char name[40];
    float m1,m2,m3;
};
void main()
{
    int n;
    printf("Enter the number of students:\n");
    scanf("%d",&n);

    struct student s[n];

    printf("Enter the input for %d students\n",n);

    for(int i=0; i<n; i++)
    {
        printf("Enter the roll_no,name and three marks of the %d student:",i + 1);
        scanf("%d%s%f%f%f",&s[i].roll_no,&s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);
    }

    for(int i=0; i<n; i++)
    {
        printf("%d,%s,%.2f,%.2f,%.2f,\n",s[i].roll_no,s[i].name,s[i].m1,s[i].m2,s[i].m3);
    }

    // Calculate total and average of n number of students

    for(int i=0; i<n; i++)
    {
        printf("The total marks of the %d student is: %.2f + %.2f + %.2f which is:%.2f\n",i + 1,s[i].m1, s[i].m2 ,s[i].m3 ,(s[i].m1 + s[i].m2 + s[i].m3));
        printf("The average marks of the %d student is: %.2f\n",i + 1, (s[i].m1 + s[i].m2 + s[i].m3)/3);
    }
}
