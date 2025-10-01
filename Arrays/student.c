#include<stdio.h>
void main()
{
    int size,sum = 0;
    float avg;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int marks[size];
    printf("Enter the 5 marks of student:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("The entered marks of student are:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",marks[i]);
    }

    printf("\n");
    // Now calculate sum and average

    for(int i=0;i<size;i++)
    {
        sum = sum+marks[i];
    }
    avg = (float)sum/size;
    printf("The sum is:%d\n",sum);
    printf("The average is:%.2f\n",avg);

}
