#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,max;
clrscr();
		printf("enter the value of a,b and c \n");
		scanf("%d %d %d",&a,&b,&c);

		max=(a>b)?(a>c)?a:c:(b>c)?b:c;
		printf("%d is maximum",max);

getch();
}