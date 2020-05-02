/*
		Author:- KARSHIL SHETH
		Objective:-TO ENTER THE CHARACTER IN THE FILE. 
		Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
char d;
clrscr();
	FILE *fp;
	printf("\n enter the character");
	scanf("%c",&d);
	fp=fopen("datat.txt","w");
	putc(d,fp);
	fclose(fp);
	fp=fopen("datat.txt","r");

	d=getc(fp);
		printf("this is %c",d);



getch();
}