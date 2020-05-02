/*
	PROGRAMMER NAME :  Karshil Sheth
	DOC : 25/04/2017
	PROGRAMME : FOR DESIGN
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		printf(" *\t ");
		printf("\n  ");
	}
	getch();
}