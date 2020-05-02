/*
	Author:- KARSHIL SHETH
	Objective:-TO ENTER NAME IN FILE. 
	Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char n[20];

	int x,i;
	clrscr();
	FILE *fp;
	printf("\nenter name:");
	gets(n);
       //	scanf("%s",&n);
	fp=fopen("test.txt","w");
	for(i=0;n[i]!='\0';i++)
	{
		putc(n[i],fp);
	}
	fclose(fp);
       fp=fopen("test.txt","r");
       printf("Name  : ");
       //x=getc(fp);
       while((x=getc(fp))!=-1)
       {
	printf("%c",x);
       }

getch();
}