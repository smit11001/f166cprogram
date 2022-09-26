#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,max;
clrscr();
		printf("enter the value of a and b \n");
		scanf("%d %d",&a,&b);

		max=(a>b)?a:b;
		printf("%d is maximum",max);

getch();
}