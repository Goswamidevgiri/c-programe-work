#include<stdio.h>
#include<conio.h>

void swap (int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void main()
{
	int x,y;
	clrscr();
	printf("\nEnter Value : ");
	scanf("%d",&x);
	printf("\nEnter Value : ");
	scanf("%d",&y);
	printf("\nValue Before Exchange is %d is %d",x,y);
	swap(&x,&y);
	printf("\nValce Before After is %d is %d",x,y);
	getch();
}