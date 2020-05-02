/*
		Author:- KARSHIL SHETH
		Objective:-FIBONNACI SEQUENCES. 
		Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j=0,k=1,a;
	clrscr();
	printf("\n Fibonacci series is  : ");
	i=1;
	while(i<=10)
	{
		a=j+k;
		printf("\n %d",a);
		j=k;
		k=a;
		i++;
	}
	getch();
}