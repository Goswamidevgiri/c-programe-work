#include<stdio.h>
#include<conio.h>

int add(int a,int b)
{
	return a+b;
}
void main()
{
	int x,y;
	clrscr();
	printf("\n Enter Value : ");
	scanf("%d",&x);
	printf("\n Enter Value : ");
	scanf("%d",&y);
	printf("\n Addition : %d",add(x,y));
	getch();
}