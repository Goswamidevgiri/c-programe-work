#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char s1[50],s2[50];
	int x;
	clrscr();
	printf("\n Enter String 1 : ");
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	x=strcmp(s1,s2);
	printf("\n Original String Is %s",s1);
	printf("\n Reversed String Is %s",s2);
	if(x==0)
	{
		printf("\n Given String Is Palindrom");
	}
	else
	{
		printf("\n Given String Is Not Pxalindrom");
	}
	getch();
}
