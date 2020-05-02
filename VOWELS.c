/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 15/04/2017
	PROGRAME : SWITCH CASE : IDENTIFY VOWELS
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n Enter any character : ");
	scanf("%c",&ch);

	switch(ch)
	{
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
		case 'A' :
		case 'E' :
		case 'I' :
		case 'O' :
		case 'U' : printf("\n Entered char %c is VOWEL ");
		break;
		default : printf("\n Entered char  %c  CONSONANT");
	}
	getch();
}