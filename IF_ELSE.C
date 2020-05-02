/*
	Programmer name : 
	DOC : 01/04/2017
	PROGRAMME : if....else..
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2;
	clrscr();
	printf("\n Enter value of no1 : ");
	scanf("%d",&no1);
	printf("\n Enter the value of no2 :  ");
	scanf("%d",&no2);
	if(no1>no2)
	{
	  printf("\n num 1 is greater than num 2.");
	}
	else
	{
	    printf("\n num 2 is greater than num1");
	}
	getch();
}