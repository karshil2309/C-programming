/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-NUMBER IS PRIME 
	DATE:- 13-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,n1,sum=0;
	clrscr();
	printf("\n Enter any num ");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		i=n%10;
		sum=(sum*10)+i;
		n=n/10;
	}
	if(sum==n1)
	{
		printf("\n Number is P");
	}
	else
	{
		printf("\n Num is not P");
	}
	getch();
}