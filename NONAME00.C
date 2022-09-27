#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,sum,sub,mul,div,mod;
clrscr();
	printf("enter the value of i");
	scanf("%d",&i);
	printf("you have entered a value of %d\n",i );
	printf("enter the value of j");
	scanf("%d",&j);
	printf("you have entered a value of %d\n",j);


	sum=i+j;
	printf("you have entered a value of i and j is %d+%d=%d\n",i,j,sum );
	sub=i-j;
	printf("YOU HAVE ENTERED A VALUE OF I AND J IS %d-%d=%d\n",i,j,sub);
	mul=i*j;
	printf("you have entered a value of i and j is %d*%d=%d\n",i,j,mul);
	div=i/j;
	printf("you have enteerd a value of i and j is %d/%d=%d\n",i,j,div);
	mod=i%j;
	printf("you have entered a value of i and j is %d#%d=%d\n",i,j,mod);
getch();
}