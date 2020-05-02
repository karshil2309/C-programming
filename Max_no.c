/*
	Programmer name : Karshil Sheth
	DOC : 01/04/2017
	Programme : nested if...else..
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int  no1,no2,no3;
	clrscr();
	printf("\n Enter the value of no1 : ");
	scanf("%d",&no1);
	printf("\n Enter the value of no2 : ");
	scanf("%d",&no2);
	printf("\n Enter the value of no3 : ");
	scanf("%d",&no3);
	if(no1>no2)
	{
		if(no1>no3)
		{
		    printf("\n No1 is greater.");
		}
		else
		{
		    printf(" \n No3 is greater.");
		}
	}
	else
	 {
		if(no2>no3)
		 {
			printf("\n No2 is greater.");
		 }
		 else
		 {
			printf("\n No3 is greater .");
		 }

	  }

	getch();
}