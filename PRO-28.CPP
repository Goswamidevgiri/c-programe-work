#include<stdio.h>
#include<conio.h>

void main()
{
	double a,b,*p,*q;
	clrscr();
	a=10;
	p=&a;
	printf("\n a : %lf",a);
	printf("\n p : %u",p);
	printf("\n *p : %lf",*p);
	b=20;
	q=&b;
	printf("\n b : %lf",b);
	printf("\n q : %u",q);
	printf("\n *q : %lf",*q);
	getch();
}