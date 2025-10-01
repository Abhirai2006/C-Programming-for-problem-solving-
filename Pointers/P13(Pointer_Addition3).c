#include<stdio.h>
void main()
{
    int n,var;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the value for var:\n");
    scanf("%d",&var);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    /*

    // Case 1

    printf("The entered elements of the array are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    int *p = &arr;

    // Case 2

    printf("\n");
    printf("The entered elements of the array are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(p + i)); //printf("%d ",*p); this will always print 1 because p always points to the first location
    }

    */

    // Case 3 use arithmetic operators

    int *p = &arr;
    printf("%d",*p);
    p = p+1;
    printf("\n%d",*p);
    p+2; // changes wont be reflected as it is not stored in any variable.
    printf("\n%d",*p);
   // p = p + 5; // trying to access invalid location.
    printf("\n%d",*p);
    p++;
    printf("\n%d",*p);
    // a = a+1; // invalid
    *p = 1000;
    printf("\n%d",*p);

    // Before changing
    printf("\nThe entered elements of the array before changing are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    //changing
    for(int i=0; i<n; i++)
    {
        *(p + i) = var;
        var += 1000;
    }

    // After changing
    printf("\nThe entered elements of the array after changing are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(p + i));
    }
}
