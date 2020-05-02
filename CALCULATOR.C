/*
		Author:- KARSHIL SHETH
		Objective:-SIMPLE CALCULATOR. 
		Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int *p,*q,a,b,ch,x;
	clrscr();
	p=&a;
	q=&b;
	printf("\ntwo numbers are:");
	scanf("%d%d",p,q);

	printf("\n1.Enter 1 for addition");
	printf("\n2.Enter 2 for subtraction");
	printf("\n3.Enter 3 for multiplication");
	printf("\n4.Enter 4 for division");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		 x=*p+*q;
		 printf("\naaddition is %d",x);
		 break;

		case 2:
		 x=*p-*q;
		 printf("\naaddition is %d",x);
		 break;

		case 3:
		 x=(*p)*(*q);
		 printf("\naaddition is %d",x);
		 break;

		case 4:
		 x=(*p)/(*q);
		 printf("\nnaaddition is %d",x);
		 break;

	}
getch();

}