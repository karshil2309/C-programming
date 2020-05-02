/*
	PROGRAMMER NAME :  Karshil Sheth
	DOC : 05/04/2017
	PROGRAMME : EVEN ODD TO ODD EVEN
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,s;
	clrscr();
	printf("\n enter the number no : ");
	scanf("%d",&no);
	if(no%2==0)
	    {
		printf("\n Number is even ");
		s=no+1;
		printf("\n\n  next odd to this number is = %d",s);
	    }
	else
	    {
		printf("\n Number is odd ");
		s=no+1;
		printf("\n\n next Even to this odd = %d",s);
	    }
	getch();
}