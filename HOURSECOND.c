/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 02/04/2017
	PROGRAMME : CALCULATION OF HOURS , MINUTES AND SECONDS
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int s,h,m;
	clrscr();
	printf("\n enter the number of seconds s = : ");
	scanf("%d",&s);
	h=s/3600;
	printf("\n number of hours is = %d",h);
	m=(s%3600)/60;
	printf("\n minutes is =%d",m);
	s=(s%3600)%60;
	printf("\n Seconds is = %d",s);

	getch();
}