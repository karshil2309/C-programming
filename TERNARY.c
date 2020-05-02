/*
	PROGRMMER NAME : Karshil Sheth
	DOC : 14/04/2017
	PROGRAMME : USING OF TERNARY OPERATOR
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,max;
	clrscr();
	printf("\n Enter the value no1 and no2 =");
	scanf("%d%d",&no1,&no2);
	max=((no1>no2)?no1:no2);
	printf("maximum from %d and %d is %d",no1,no2,max);
	getch();

}