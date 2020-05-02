/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-COPY FULL STRING  
	DATE:- 13-02-2018
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[10],s2[10];
	int i;
	clrscr();
	printf("enter the string:");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];

	}
	s2[i]='\0';
	printf("\ncopied string is %s",s2);
	getch();
}