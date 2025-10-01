#include<stdio.h>
void main()
{
     printf("The size of a character data type in a 32 bit machine is:%hd byte\n",sizeof(char));
     char a = 'a';
     printf("%c\n",a);
     printf("%d\n",a);


     char b = 98;
     printf("%c\n",b);
     printf("%d\n",b);


     char c = 'z';
     printf("%c\n",c);
     printf("%d\n",c);


     char d = 130;
     printf("%c\n",d);
     printf("%d\n",d);


     unsigned char e = -130;
     printf("%c\n",e);
     printf("%d\n",e);
     printf("%u\n",e);


     unsigned char f = -129;
     printf("%c\n",f);
     printf("%d\n",f);
     printf("%u",f);

     //unsigned float g = 23.55f; // error
     //signed double h = 23.55f; // error
     //signed long double i = 23.55f; // error
     // NOTE - You cant have signed or unsigned for float, long double or double.

}
