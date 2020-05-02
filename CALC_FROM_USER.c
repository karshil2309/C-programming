/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 29/04/2017
	PROGRAMME :
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,ch,n;
	clrscr();
	printf("\n Enter number n1 : ");
	scanf("%d",&n1);
	printf("\n Enter another number n2 : ");
	scanf("%d",&n2);
	printf("\n Select Operation ");
	printf("\n 1) Addition ");
	printf("\n 2) Multiplication ");
	printf("\n 3) Subtraction ");
	printf("\n 4) Divison ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:n=n1+n2;
			printf("\n Addition is=%d",n);
			break;

		case 2:n=n1*n;
			printf("\n Multiplication is =%d",n);
			break;

		case 3:n=n1-n2;
			printf("\n Subtraction is=%d",n);
			break;

		case 4:n=n1/n2;
			printf("\n Divison is =%d",n);
			break;

		default:printf("\n Select Valid Operation ");
			break;
	}
	getch();
}
