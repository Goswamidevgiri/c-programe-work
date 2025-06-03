#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],*p,i;
	clrscr();
	printf("\n Enter Array Elements\n");
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d Elements : ",i);
		scanf("%d",&a[i]);
	}
	p=&a[0];
	printf("\n Array Elements With Their Address \n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] : %d & Address is %u",i,a[i],p++);
	}
	getch();
}