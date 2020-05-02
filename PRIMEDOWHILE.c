/*
		Author:- KARSHIL SHETH
		Objective:-PRIME USING DO..WHILE... 
		Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,count=0,primeTotal=0;
	clrscr();
	i=1;
	do
	{
		count=0;
		j=1;
		do
		{
			if(i%j==0)
			{
				count++;
			}
			j++;
		}
		while(j<=i);
		if(count==2)
		{
			printf(" %d ",i);
			primeTotal++;
		}
		i++;
	}
	while(i<=50);
	printf("\n Total prime is = %d",primeTotal);
	getch();
}