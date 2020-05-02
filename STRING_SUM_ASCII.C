/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-SUM OF ASCII OF STRING 
	DATE:- 13-02-2018
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char c[10],i;
	int sum;
	clrscr();
	printf("\n enter the string");
	scanf("%s",c);
	sum=0;
	for(i=0;c[i]!='\0';i++)
	{
		printf("\n%d",c[i]);
		sum=sum+c[i];

	}
	printf(" \nsum is %d",sum);
	getch();
}