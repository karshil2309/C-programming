/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 05/04/2017
	PROGRAMME : MIN VALUE
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,no3;
	clrscr();
	printf("\n Enter no1 : ");
	scanf("%d",&no1);
	printf("\n Enter no2 : ");
	scanf("%d",&no2);
	printf("\n Enter no3 : ");
	scanf("%d",&no3);
	if(no1<no2)
		{
			if(no1<no3)
			{
			printf("\n no1 is MIN ");
			}
			else
			{
				printf("\n no3 is MIN ");
			}
		   }
	else
	     {
			if(no2<no3)
			{
			printf("\n no2 is MIN ");
			}
			else
			{
			printf("\n no3 is MIN ");
			}
	     }

	getch();
}