/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-MAX ELEMENT FORM AN ARRAY. 
	DATE:- 13-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,max;
	clrscr();
	for(i=0;i<5;i++)
	{
	printf("\n enter the array :");
	scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	printf("\n enter the array :");
	printf("%d",a[i]);
	}
	max=a[0];
	for(i=0;i<5;i++)
	{

		 if(a[i]>max)
		{
			max=a[i];
		}
	}
	       printf(" \nmax is %d",max);



getch();
}