/*
		PROGRAMMER NAME : karshil
		PROGRAMME : INPUTTED CHAR IS ALPHABET OR NOT.
		DATE: 11-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter any character : - ");
	ch=getchar();
	if(ch>=65 && ch<=90 || ch >= 97 && ch <= 122)
		{
		    printf("\n Ch is Alphabet");
		}
	else
		{
		    printf("\n Not Alphabet");
		}

	getch();
}