#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,ans,choice;
	clrscr();
	printf("\nEnter A : ");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);
	printf("\n******************************");
	printf("\n\n1. Addition");
	printf("\n2. Substraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	printf("\n******************************\n");
	printf("\nEnter Your Choice : ");
	scanf("%d",&choice);
	printf("\n******************************\n");

	switch(choice)
	{
		case 1:
			ans=a+b;
			printf("\nAddition : %d",ans);
			break;
		case 2:
			ans=a-b;
			printf("\nSubtraction : %d",ans);
			break;
		case 3:
			ans=a*b;
			printf("\nMultiplication : %d",ans);
			break;
		case 4:
			ans=a/b;
			printf("\nDivision : %d",ans);
			break;
		default:
			printf("\nInvalid Choice");
			break;
	}
	printf("\n******************************\n");
	getch();
}