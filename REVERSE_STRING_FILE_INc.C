/*
	Author:- KARSHIL SHETH
	Objective:-TO PRINT REVERSE STRING USING FILE. 
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
	       //	strrev(n);
	}
	fclose(fp);
       fp=fopen("test.txt","r");
       printf("Name  : ");
       //x=getc(fp);
       i=0;
       fseek(fp,-1,2);
       do
       {
		x=getc(fp);
		printf("%c",x);
		fseek(fp,-2,1);
		i++;
	     //	if(i==50)
	      //	break;

       }
       while(ftell(fp)!=0);


getch();
}