/*
	PROGRAMMER NAME :  Karshil Sheth
	DOC : 14/04/2017
	PROGRAMME : CHARACTER IS DIGIT OR NOT
*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter any character :- ");
	ch=getchar();
	if(ch>=48 && ch<= 57)
	{
		printf("\n CHARACTER is DIGIT ");
	}
	else
	{
		printf("\n CHARACTER IS NOT DIGIT ");
	}
	getch();
}