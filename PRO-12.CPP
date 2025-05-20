#include<stdio.h>
#include<conio.h>

void main ()
{
	int i,j,k;
	clrscr();
	for (i=1;i<=10;i++)
	{
		for(j=i;j<=10;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}