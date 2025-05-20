#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("\nEnter Value Of A : ");
	scanf("%d",&a);
	printf("\nEnter Value Of B : ");
	scanf("%d",&b);
	c=a+b;
	printf("\n Addition of %d & %d is : %d",a,b,c);
	c=a-b;
	printf("\n Substarction of %d & %d is : %d",a,b,c);
	c=a*b;
	printf("\n Multiplication of %d & %d is : %d",a,b,c);
	c=a/b;
	printf("\n Division of %d & %d is : %d",a,b,c);
	getch();
}