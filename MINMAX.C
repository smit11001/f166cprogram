#include<stdio.h>
#include<conio.h>
void main()
{
int s,b;
clrscr();
	  printf("enter any number");
	  scanf("%d",&s);
	  printf("i have entered number is %d\n",s);
	  printf("enter any number");
	  scanf("%d",&b);
	  printf("i have entered number is %d\n",b);
	  if(s<b)
	  {
	  printf("%d is minimum",s);
	  }
	  else
	  {
	  printf("%d is minimum",b);
	  }
	  getch();
	  }