/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 05/04/2017
	PROGRAMME : Simple Interest
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,n,SI;
	clrscr();
	printf("\n Enter the value of principle p = ");
	scanf("%f",&p);
	printf("\n Enter the value of rate r = ");
	scanf("%f",&r);
	printf("\n Enter the value of no of years n = ");
	scanf("%f",&n);
	SI=(p*r*n)/100;
	printf("\n the simple interest is =%f ",SI);
	getch();
}