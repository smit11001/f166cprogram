#include<stdio.h>
#include<conio.h>
void main()
{
int s,b,sum,sub,mul,div,avg;
clrscr();
	printf("enter number is s");
	scanf("%d",&s);
	printf("enter number is b");
	scanf("%d",&b);
	sum=s+b;
	printf("you have entered number is %d=%d+%d",sum,s,b);
	printf("enter number is s");
	scanf("%d",&s);
	printf("enter number is b");
	scanf("%d",&b);
	sub=s-b;
	printf("you have enteerd number is %d=%d-%d",sub,s,b);
	printf("enter number is s");
	scanf("%d",&s);
	printf("enter number is b");
	scanf("%d",&b);
	mul=s*b;
	printf("you have entered number is %d=%d*%d",mul,s,b);
	printf("enter number is s");
	scanf("%d",&s);
	printf("enter number is b");
	scanf("%d",&b);
	div=s/b;
	printf("you have entered number is %d=%d/%d",div,s,b);
	printf("enter number is s");
	scanf("%d",&s);
	printf("enter number is b");
	scanf("%d",&b);
	avg=(s+b)/2;
	printf("you have enteerd number is %d=(%d+%d)/2",avg,s,b);
getch();
}