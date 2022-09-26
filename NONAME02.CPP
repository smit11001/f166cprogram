#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,sub,result;
clrscr();
      printf("enter the value of x,y and z is:\n");
      scanf("%d%d%d",&x,&y,&z);
      sub=x-y-z;
      result=sub*sub*sub;
      printf("result of x,y and z is :%d%d%d\n",result);
      getch();
      }