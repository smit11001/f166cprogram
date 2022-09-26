#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,sub,result;
clrscr();
      printf("enter the value of x:\n");
      scanf("%d",&x);
      printf("enter the value of y:\n");
      scanf("%d",&y);
      sub=x-y;
      result=sub*sub*sub;
      printf("result of x and y is%d\n",result);
  getch();
  }