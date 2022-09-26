#include<stdio.h>
#include<conio.h>
void main()
{
int a=5,b=6,c=10,min;
clrscr();
	 if(a<b)
	 {     if(a<c)
	       {min=a;
	       }
	       else
	       {min=c;
	       }
	 }
	 else
	 {
	       if(b<c)
	       {min=b;
	       }
	       else
	       {min=c;
	       }
	  }
	  printf("%d",min);
 getch();
 }