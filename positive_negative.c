/*
	Programmer name : Karshil Sheth
	DOC : 01/04/2017
	PRogramme : LAdder if....else..
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	printf("\n Enter the value of no :");
	scanf("%d",&no);
	if(no>0)
	 {
	 printf("\n NO is POSITIVE");

	 }
	else if(no<0)
	  {
	   printf("\n NO is NEGATIVE");
	  }
	else
	 {
		printf("\n NO is ZERO");
	}


	getch();
}