/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 05/04/2017
	PROGRAMME : NO2 IS MAX AND NO3 =NO1+NO2
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,no3;
	clrscr();
	printf("\n Enter the value of number1 no1 = ");
	scanf("%d",&no1);
	printf("\n Enter the value of number2 no2 = ");
	scanf("%d",&no2);
	if(no2>no1)
	   {
		printf("\n number 2 is max ");
		no3=no2+no1;
		printf("\n number 3:no1+no2 = %d",no3);
	   }
	else
	   {
		printf("\n number is invalid");
	   }

	getch();
}