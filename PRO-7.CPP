#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter A : ");
	scanf("%d",&a);
	printf("\n Enter B : ");
	scanf("%d",&b);
	printf("\n Enter C : ");
	scanf("%d",&c);
	if (a>b)
	{
		if (a>c)
		{
			printf("\n A is Max Number");
		}
		else
		{
			printf("\n C is Max Number");
		}
	}
	else if (b>c)
	{
		printf("\n B is Max Number");
	}
	else
	{
		printf("\n C is Max Number");
	}
	getch();
}