/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-PRINT SUM 1 TO 50 USING FOR LOOP. 
	DATE:- 13-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0;
	clrscr();
	for(i=1;i<=50;i++)
	{
		printf(" %d ",i);
		sum=sum+i;
	}
	printf("\n Sum = %d",sum);
	getch();
}