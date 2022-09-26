#include<stdio.h>
#include<conio.h>
void main()
{
int p,r,t,si;
clrscr();
	  printf("enter the number");
	  scanf("%d %d %d",&p,&r,&t);
	  si=(p*r*t)/100;
      printf("i have entered simple interest is (%d*%d*%d)/100=%d",p,r,t,si);
 getch();
 }