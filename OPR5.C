#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,sum,result;
clrscr();
      printf("enter the value of x,y and z is :\n");
      scanf("%d%d%d",&x,&y,&z);
      sum=x+y+z;
      result=sum*sum*sum;
      printf("result of x,y and z is:%d%d%d\n",result);
 getch();
 }