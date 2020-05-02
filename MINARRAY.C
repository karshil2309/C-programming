/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-MINIMUM ELEMENT FROM AN ARRYAY. 
	DATE:- 13-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,min;
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
	min=a[0];
	for(i=0;i<5;i++)
	{

		 if(a[i]<min)
		{
			min=a[i];
		}
	}
	       printf(" \nmin is %d",min);



getch();
}