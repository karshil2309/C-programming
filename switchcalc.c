/*
	PROGRAMMER NAME : Karshil Sheth	
	DOC : 25/04/2017
	PROGRAMME : SWITCH CALCULATOR
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,x,z;
	clrscr();
	printf("\n Enter any two numbers : ");
	scanf("%d %d",&n1,&n2);
	printf("\n Select Calculation Type : ");
	printf("\n 1) Addition ");
	printf("\n 2) Subtraction ");
	printf("\n 3) Multiplication ");
	printf("\n 4) Division ");
	scanf("%d",&x);
	switch(x)
	{
		case 1://add
			z=n1+n2;
			printf("\n Addition = %d",z);
		break; //end add

		case 2://subt
			z=n1-n2;
			printf("\n Subtraction =%d",z);
		break;//end subt

		case 3://mul
			z=n1*n2;
			printf("\n Multiplication =%d",z);
		break;// end mul

		case 4://div
		       z=n1/n2;
		       printf("\n Division =%d",z);
		break;//end div
	}
	getch();
}
