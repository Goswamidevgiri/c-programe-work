#include<stdio.h>
#include<conio.h>

void add(int a, int b)
{
	printf("\n Addition : %d",a+b);
}
void main()
{
	int x,y;
	clrscr();
	printf("\nEnter Value : ");
	scanf("%d",&x);
	printf("\nEnter Valuse : ");
	scanf("%d",&y);
	add(x,y);
	getch();
}
