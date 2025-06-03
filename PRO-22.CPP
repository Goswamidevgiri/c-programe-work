#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,sum=0;
	clrscr();
	printf("\n Enter Array Elements \n");
	for(i=0;i<5;i++)
	{
		printf("Enter %d Element : ",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\n Sum : %d",sum);
	printf("\nArray Elements Are\n");
	for (i=0;i<5;i++)
	{
		printf("\nA[%d] : %d",i,a[i]);
	}
	getch();
}