#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=0;
	clrscr();
	printf("\nEnter N : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\nsum : %d",sum);
	getch();
}