			       /*telecom service coversation
			       using nested switch case*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
	 printf("welcome to the telecom sevice\n");
	 printf("select language\n");
	 scanf("%d",&a);
	 switch(a)
	 {
	 case 1:printf("ENGLISH");
		break;
		printf("select service\n");
		scanf("%d",&b);
	  switch(b)
	  {
	  case 1:printf("sim card");
		break;
	  case 2:printf("network");
		break;
	  case 3:printf("recharge");
		break;
	  }
	  case 2:printf("HINDI");
		break;
		printf("select service\n");
		scanf("%d",&b);
	 switch(b)
	 {
	 case 1:printf("sim card");
		break;
	 case 2:printf("network");
		break;
	 case 3:printf("recharge");
		break;
	 case 4:printf("call to customer care");
		break;
	 default:printf("invalid request");
		break;
	 }

	case 3:printf("GUJARATI");
		break;
		printf("select service\n");
		scanf("%d",&b);
	switch(b)
	{
		case 1:printf("sim card");
		       break;
		case 2:printf("network");
		       break;
		case 3:printf("recharge");
		       break;
		case 4:printf("call to customer care");
		       break;
		default:printf("invalid request");
			break;
	 }
       }
		printf("\n select services");
		scanf("%d",&b);
	 switch(b)
	 {
		case 1:printf("sim card");
		       break;
		case 2:printf("network");
		       break;
		case 3:printf("recharge");
		       break;
		case 4:printf("call to customer care");
		       break;
		default:printf("invalid request");
			break;
	  }
	 getch();
	 }