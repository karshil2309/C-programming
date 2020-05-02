/*
		Author:- KARSHIL SHETH
		Objective:-TO CHECK THE LENGTH OF A DIGIT. 
		Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i=0;
	clrscr();
	printf("\n Enter any digit : ");
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
		i++;
	}
	printf("\n Length = %d",i);
	getch();
}
