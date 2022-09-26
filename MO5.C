#include<stdio.h>
#include<conio.h>
void main()
{
int unit;
float amt,ta,sc;
clrscr();
	 printf("enter total units consume:");
	 scanf("%d",&unit);
	 if(unit<=50)
	 {
		amt=unit*0.50;
	 }
	 else if(unit<=150)
	 {
		amt=25+((unit-50)*0.75);
	 }
	 else if(unit<=250)
	 {
		amt=100+((unit-150)*1.20);
	 }
	 else
	 {
		amt=220+((unit-250)*1.50);
	 }
	   sc=amt*0.20;
	   ta=amt+sc;
	   printf("ELECTRICITY BILL= %f",ta);
getch();
}