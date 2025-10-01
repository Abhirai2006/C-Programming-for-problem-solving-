#include<stdio.h>
void main()
{
    //Initialization with size

    int a[5] = {0, 1, 2, 3, 4};
    for(int i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }

    //Initialization without size (size id inferred automatically)

    printf("\n");
    int a1[] = {2, 4, -8, 10, 200, -90, 5, -9};
    int size = sizeof(a1) / sizeof(a1[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a1[i]);
    }


    int n = 100;
    printf("\nThe size of a1 is %d",sizeof(n));
    printf("\nThe size of a1 is %d\n",sizeof(a1));

    // partial initialization ( unspecified elements are set to zero)

    int a2[5] = {0, 1, 2};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a2[i]);
    }

    printf("\n");

    // initialising all elements to zero
    int a3[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a3[i]);
    }

}
