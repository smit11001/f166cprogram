#include<stdio.h>
#include<conio.h>
void main()
{
int s;
clrscr();
	  printf("enter any number");
	  scanf("%d",&s);

	  printf("entered the number is:%d\n",s);
	  (s%2==0)?printf("The number is even :%d\n",s):
	  printf("The number is odd :%d\n",s);
getch();
}

