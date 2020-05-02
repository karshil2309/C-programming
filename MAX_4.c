/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 14/04/2017
	PROGRAMME : N4 IS MAX
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3,n4;
	clrscr();
	printf("\n Enter any four numbers : - ");
	scanf("%d%d%d%d", &n1,&n2,&n3,&n4);
	if(n1>n2)
		{
			if(n1>n3)
			{
			printf("\n number1 is max");
			 }
			 else if(n1>n4)
			 {
				printf("\n number 1 is max");
			}
			else if(n3>n4)
			{
				printf("\n number n3 is max");
			}
			else
			{
				printf("\n number 4 is max");
			}

		}
	else
		{
			if(n2>n3)
			{
			printf("\n number 2 is max");
			}
		      else if(n2>n4)
			{
				printf("\n number 2 is max");
			}
			else if(n3>n4)
			{
				printf("\n number 3 is max");
			}
			else
			{
				printf("\n number 4 is max");
			}

		}
  /*	else if(n3>n4)
		{
			if(n3>n1)
			{
			printf("\n number 3 is max");
			}
			else if(n3>n2)
			{
				printf("\n number 3 is max");
			}
			else
			{
				printf("\n number 1 and 2 max ");
			}
		}
	else
		{
			printf("\n number 4 is max");
		}   */
	getch();
}
