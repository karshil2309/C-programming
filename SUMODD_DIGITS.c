/*
		Author:- KARSHIL SHETH
		Objective:-SUM OF ODD DIGITS 
		Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0,rem;
	clrscr();
	printf("\n Enter any number : ");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		if(rem%2!=0)
		{
		sum=sum+rem;
		}
		n=n/10;
	}
	printf("\n sum of odd digits of num %d",sum);
	getch();
}