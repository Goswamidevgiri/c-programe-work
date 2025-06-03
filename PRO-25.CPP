#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char s1[50],ch;
	int count=0,l1,i;
	clrscr();
	printf("\nEnter String : ");
	gets(s1);
	printf("\n Enter Character You Went To Count From String : ");
	scanf("%c",&ch);
	l1=strlen(s1);
	for(i=0;i<l1;i++)
	{
		if(s1[i]==ch)
		{
			count++;
		}
	}
	printf("\n Total No Of %c Is %d",ch,count);
	getch();
}