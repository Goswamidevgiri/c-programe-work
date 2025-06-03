#include<stdio.h>
#include<conio.h>

void printline()
{
	int i;
	for(i=0;i<50;i++)
	{
		printf("*");
	}
}
void main()
{
	clrscr();
	printline();
	printf("\n Welcome To User Define Function in c \n");
	printline();
	getch();
}