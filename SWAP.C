/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 05/04/2017
	PROGRAMME : Swap or interchange two numbers with using temporary variable.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter a value = ");
	scanf("%d",&a);
	printf("\n Enter another value = ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\n Swap value of a is = %d",a);
	printf("\n Swap value of b is = %d",b);
	getch();
}         