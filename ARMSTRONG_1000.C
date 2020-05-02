/*
		Author:- KARSHIL SHETH
		Objective:-ARMSTRONG NUMBER BETWEEN 1 TO 1000. 
		Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,sum=0;
	clrscr();
	i=1;
	while(i<=1000)
	{
		sum=0;
		j=i;
		while(j>0)
		{
			n=j%10;
			sum=sum+(n*n*n);
			j=j/10;
		}
		if(i==sum)
		{
			printf(" %d ",i);
		}
		i++;
	}
	getch();
}