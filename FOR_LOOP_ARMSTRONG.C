/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-ARMSTRONG NUMBER USING FOR. 
	DATE:- 13-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,dup,sum=0;
	clrscr();
	printf("\n Enter any number : ");
	scanf("%d",&n);
	dup=n;
	for(;n>0;n=n/10)
	{
		i=n%10;
		sum=sum+(i*i*i);
	}
	if(sum==dup)
	{
		printf("\n Num is Armstromg");
	}
	else
	{
		printf("\n Num is not Armstrong ");
	}
	getch();
}