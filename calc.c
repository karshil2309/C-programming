/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 15/04/2017
	PROGRAMME : DEMO TO SWITCH
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,ans,choice;
	clrscr();
	printf("\n Enter number 1 : ");
	scanf("%d",&n1);
	printf("\n Enter number 2 : ");
	scanf("%d",&n2);


	printf("\n   \t  Variable choice are as below : ");
	printf("\n\n 1) Summation of numbers ");
	printf("\n 2) Subtraction of numbers ");
	printf("\n 3) Multiplication of numbers ");
	printf("\n 4) Division of numbers ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : ans=n1+n2;
			printf("\n Sum is : %d",ans);
			break;
		case 2 : ans=n1-n2;
			printf("\n Subtraction is : %d",ans);
			break;
		case 3 : ans=n1*n2;
			printf("\n Multiplication is : %d",ans);
			break;
		case 4 : ans=n1/n2;
			printf("\n Divide is : %d",ans);
			break;
		default : printf("\n invalid choice \n \tcheck the choice entered. ");
	}

	getch();
}