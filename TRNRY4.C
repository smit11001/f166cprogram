#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,max;
clrscr();
	  printf("enter the value of a,b,c and d \n");
	  scanf("%d %d %d %d",&a,&b,&c,&d);

	  max=(a>b && a>c && a>d)? a:(b>c && b>d)? b:(c>d)?c:d;
	  printf("%d is maximum",max);
getch();
}