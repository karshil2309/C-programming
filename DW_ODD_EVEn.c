/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-EVEN ODD USING DO WHILE. 
	DATE:- 13-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0;
	clrscr();
	i=1;
	do
	{
		if(i%2==0)
		{
			printf(" %d ",i);
		}
		else
		{
			sum=sum+i;
		}
		i++;
	}
	while(i<=50);
	printf("\n sum of odd is =%d",sum);
	getch();
}