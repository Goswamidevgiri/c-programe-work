#include<stdio.h>
#include<conio.h>

void main ()
{
	int a[5],i,j,temp,sum=0;
	clrscr();
	printf("\n Enter Array Elements\n");
	for (i=0;i<5;i++)
	{
		printf("Enter %d Element : ",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\n Sum : %d",sum);
	printf("\nArray Elemnts Are\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] : %d",i,a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nArray Elements Are in Asending Order\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] : %d",i,a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nArray Elements Are in Desceding Order\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] : %d",i,a[i]);
	}
	getch();
}