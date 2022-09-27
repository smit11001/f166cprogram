#include<stdio.h>
#include<conio.h>
void main()
{
int bs,HRA,DA,TA,gs;
clrscr();
    printf("enter the salary");
    scanf("%d",&bs);
    HRA=(bs*10)/100;
    printf("the value of HRA is :%d\n",HRA);
    DA=(bs*5/100);
    printf("the value of DA is :%d\n",DA);
    TA=(bs*8)/100;
    printf("the value of TA is :%d\n",TA);
    gs=bs+HRA+DA+TA;
    printf("the gross salary is :%d",gs);
 getch();
 }