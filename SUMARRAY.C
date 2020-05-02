/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-SUM OF ARRAY. 
	DATE:- 13-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,sum;
	clrscr();

	for(i=0;i<5;i++)
	{
	printf("\n enter the array :");
	scanf("%d",&a[i]);
	}
	sum=0;
	for(i=0;i<5;i++)
	{
	printf("\n enter the array :");
	printf("%d",a[i]);
	sum=sum+a[i];
	}
	printf("\nthe sum is %d",sum);


getch();

}