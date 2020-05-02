/*
		Author:- KARSHIL SHETH
		Objective:-SUM OF DIGIT. 
		Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0,rem=0;
	clrscr();
	printf("\n Enter any number : ");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("\n Digit of sum is :%d ",sum);
	getch();
}