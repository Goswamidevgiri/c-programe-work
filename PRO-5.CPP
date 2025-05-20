#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	printf("\n Enter A : ");
	scanf("%d",&a);
	if (a%2==0)
	{
		printf("\n A is Even Number");
	}
	else
	{
		printf("\n A is Odd Number");
	}
	getch();
}