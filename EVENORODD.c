/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 05/04/2017
	PROGRAMME : NUMBER IS EVEN OR ODD
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	printf("\n Enter any number no = ");
	scanf("%d",&no);
	if(no%2==0)
	  {
		printf("\n number is even");
	  }
	else
	  {
		printf("\n number is odd");
	  }

	getch();
}