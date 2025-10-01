#include <stdio.h>
void main() {
    int a,b,c,x;
    printf("Enter three integers:\n");
    x = scanf("%d%d",&a,&b,&c);
    printf("%d",x);  // x will return how many inputs scanf successfully read
}
