/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-SCAN VOWELS FROM A STRING. 
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
	for(i=0;c[i]!='\0';i++)
	{
	       if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
	       {
			printf("\n%c",c[i]);
	       }

	}
getch();
}