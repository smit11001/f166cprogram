#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,max;
clrscr();
		printf("value of a,b,c,d and e is \n");
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

	max=(a>b && a>c && a>d && a>e)? a:(b>c && b>d)? b:(c>d && c>e)? c:(d>e)?d:e;
	printf("%d is maximum",max);
 getch();
 }