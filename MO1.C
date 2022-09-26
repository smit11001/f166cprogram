			/*input any character & check whether
			it is alphabet,digit or special character */
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr;
	printf("enter any character:");
	scanf("%c",&ch);

	if(ch>='a' && ch<='z')
	{
	printf("Entered character is digit\n");
	}
	else if(ch>='A' && ch<='Z')
	{
	printf("Entered character is capital letter\n");
	}
	else if(ch>='a' && ch<='z')
	{
	printf("Entered character is small letter\n");
	}
	else
	{
	printf("Entered character is special character\n");
	}
getch();
}

