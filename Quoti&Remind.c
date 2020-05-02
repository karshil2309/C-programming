/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 25/04/2017
	PROGRAMME : QUOTIENT AND REMAINDER
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,Q,R;
	clrscr();
	printf("\n Enter the  dividend n1 : ");
	scanf("%d",&n1);
	printf("\n Enter the divisor n2 : ");
	scanf("%d",&n2);
	Q=n1/n2;
	printf("\n Quotient = %d",Q);
	R=n1%n2;
	printf("\n Remainder = %d",R);
	getch();
}

