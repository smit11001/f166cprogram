#include<stdio.h>
#include<conio.h>
void main()
{
int a=20,b;
clrscr();
a+=2;
     printf("after the chnge %d\n",a);
a-=3;
     printf("after the change %d\n",a);
a*=4;
     printf("after the change %d\n",a);
a/=5;
      printf("after the change %d\n",a);
a%=6;
     printf("after the change %d\n",a);
b&=a;
      printf("after the change %d\n",b);
a^=7;
     printf("after the change %d\n",a);
a|=8;
     printf("after the change %d\n",a);
  getch();
}
