#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,s;
clrscr();

	 printf("enter the value of a is \n",a);
	 scanf("%d",&a);
	 printf("enter the value of b is \n",b);
	 scanf("%d",&b);
	 printf("enter the value of s is \n",s);
	 scanf("%d",&s);

	 if(a>b && a>s)
	 {
	 printf("%d is min",a);
	 }
	 else if(b>s)
	 {
	 printf("%d is min",b);
	 }
	 else
	 {
	 printf("%d is min",s);
	 }
   getch();
   }



