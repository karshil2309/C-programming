/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-USING FOR LOOP FIND EVEN AND ODD SUM. 
	DATE:- 13-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i ,evenSum=0,oddSum=0;
	clrscr();
	for(i=1;i<=50;i++)
	{
		if(i%2==0)
		{
			evenSum=evenSum+i;
		}
		else
		{
			oddSum=oddSum+i;
		}
	}
		printf("\n evenSum= %d",evenSum);
		printf("\n oddSum = %d",oddSum);
	getch();
}
