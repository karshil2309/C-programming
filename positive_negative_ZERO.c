/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 05/04/2017
	PROGRAMME : positive, negative or zero
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	printf("\n Enter the number no : ");
	scanf("%d",&no);
	if(no>0)
	    {
		printf("\n Number is positive");
	    }else if(no<0)
	    {
		printf("\n Number is negative");
	    }
	else
	    {
		printf("\n Number is Zero");
	    }
	getch();
}