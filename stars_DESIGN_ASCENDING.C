/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-design stars in ascending. 
	DATE:- 13-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("\n Enter number upto which generate series : ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
		printf(" \n");
	}
	getch();
}