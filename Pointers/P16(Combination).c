#include<stdio.h>
void main()
{
    int n1,n2;
    printf("Enter the size of both the arrays:\n");
    scanf("%d%d",&n1,&n2);
    int arr1[n1], arr2[n2];

    printf("Enter the elements of the first array:\n");
    for(int i=0; i<n1; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter the elements of the second array:\n");
    for(int i=0; i<n2; i++)
    {
        scanf("%d",&arr2[i]);
    }

    printf("The entered elements of the first array are:\n");
    for(int i=0; i<n1; i++)
    {
        printf("%d ",arr1[i]);
    }

    printf("\n");
    printf("The entered elements of the second array are:\n");
    for(int i=0; i<n2; i++)
    {
        printf("%d ",arr2[i]);
    }

    // Combine both the arrays
    int n3 = n1 + n2;
    int arr3[n3];
    int *p = arr1;
    int *q = arr2;
    for(int i=0; i<n3; i++)
    {
        if(i < n1)
        {
            arr3[i] = *(p + i);
        }
        else
        {
            arr3[i] = *(q + (i - n1));

        }
    }

    printf("\n");
    printf("The third array after combining is:\n");
    for(int i=0; i<n3; i++)
    {
        printf("%d ",arr3[i]);
    }
}
