#include<stdio.h>
#include<conio.h>
void main()
{
int s,b,min;
clrscr();
	printf("enter any two numbers \n");
	scanf("%d %d",&s,&b);
	if(s<b)
	    min=s;
	else
	    min=b;
	    printf("minimum number is %d",min);
getch();
}