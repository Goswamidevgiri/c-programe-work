#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char s1[50],s2[50],s3[50];
	int l1,x;
	clrscr();
	printf("\n Enter String 1 : ");
	gets(s1);
	l1=strlen(s1);
	printf("\n Length Of String 1 Is %d",l1);
	printf("\n Enter String 2 : ");
	gets(s2);
	x=strcmp(s1,s2);
	if(x==0)
	{
		printf("\n Both String Are Equal");
	}
	else
	{
		printf("\n Both String Are Diffrent");
	}
	strcat(s1,s2);
	printf("\n After contact String 1 Is : %s",s1);
	strcpy(s3,s1);
	printf("\n After String Concat String 3 Is : %s",s3);
	strrev(s3);
	printf("\n After String Reverse String 3 Is : %s",s3);
	getch();
}