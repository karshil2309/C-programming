/*
	Programmer name : Karshil Sheth
	doc : 01/04/2017
	Programme : if...else...
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	printf("\n Enter the value of no = ");
	scanf("%d",&no);
	if(no>0)
	   {
		printf("\n Num is valid ");
	    }
	else
	   {
		printf("\n Num is not valid");
	   }
	getch();
}