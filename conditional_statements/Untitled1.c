#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,greatest,greater;
  printf("enter 3 numbers:\n");
  scanf("%d%d%d",&a,&b,&c);

  greater=(a>b)?a:b;
  greatest=(greater>c)?greater:c;

  printf("the greatest number is :%d\n",greatest);
}
