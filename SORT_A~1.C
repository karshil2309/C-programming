/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-SORTING OF ARRAY USING FUNCTION.
	DATE:- 13-02-2018
*/
#include<stdio.h>
#include<conio.h>
void sortFun();
void main()
{
	int a[5],i;
	clrscr();

	for(i=0;i<a[5];i++)
	{
	       printf("\nenter the array ");
	       scanf("%d",&a[i]);
	}
	sortFun();
	getch();

}
void sortFun();
{
	int a[5],i,j;

	for(i=0;i<=a[i];i++)
	{
		printf("\nPass: %d",i+1);
		for(j=0;j<a[i]-1;j++)
		{
			if(a[j]<a[j+1])
			{
			 a[i]=a[j+1];
			 a[j+1]=a[j];
			 a[j]=a[i];
			}

		}
		printf("\n");
		getch();
	}
	for(i=0;i<a[i];i++)
	{
		printf("\n sorting is %d",a[i]);

	}

}