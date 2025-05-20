#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	printf("\n Enter A : ");
	scanf("%d",&a);
	if (a>0)
	{
		printf("\n A is Positive Number");
	}
	else
	{
		printf("\nA is Negative Number");
	}
	getch();
}