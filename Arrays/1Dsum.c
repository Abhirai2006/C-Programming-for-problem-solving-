#include<stdio.h>
# define N 5
void main()
{
    int a1[N], a2[N], sum[N];
    printf("Enter the first array elements:\n");
    for(int i=0; i<N; i++)
    {
        scanf("%d",&a1[i]);
    }

    printf("Enter the second array elements:\n");
    for(int i=0; i<N; i++)
    {
        scanf("%d",&a2[i]);
    }

    // array sum

    printf("The sum of the array elements a1 and a2 is:\n");
    for(int i=0; i<N; i++)
    {
        sum[i] = a1[i] + a2[i];
    }

    for(int i=0; i<N; i++)
    {
        printf("%d ",sum[i]);
    }

}
