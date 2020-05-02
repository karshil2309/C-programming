/*
	Author:-	KARSHIL SHETH
	Objective:-     To Print 2X2 Matrix with 2^4 elements
	Date:- 		11/02/2017
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2][2][2];
	int i,j,k,l,m,n;
	clrscr();
	printf("\n Enter  16  elements for matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				for(m=0;m<2;m++)
				{
					scanf("%d",&a[i][j][k][m]);
				}
			}
		}
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<1;j++)
		{
			for(k=0;k<2;k++)
			{
				for(m=0;m<2;m++)
				{
					printf("%d ",a[i][j][k][m]);
				}
				printf("\t");
				for(n=0;n<2;n++)
				{
					printf("%d ",a[i][j+1][k][n]);
				}
				printf("\n");
			}
			printf(" \n");
		}

	}
	getch();

	}