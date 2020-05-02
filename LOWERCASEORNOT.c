/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 14/04/2017
	PROGRAMME : CHARACTER IS LOWERCASE OR NOT
*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char ch,ch1;
	clrscr();
	printf("\n Enter any character :-  ");
	ch=getchar();
	if(ch>=97 && ch<=122)
		{
			printf("\n Ch is lower case");
		}
	else
		{
			printf("\n Ch is not lowercase ");
		}
	if(ch>=65 && ch<=90)
		{
			ch1=ch+32;
			printf("\n Char %c is in lower case",ch1);
		}

	getch();
}