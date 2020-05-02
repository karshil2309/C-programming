/*
	Author:- KARSHIL SHETH
	Objective:-TO ENTER MULTIPLE NAME IN FILE. 
	Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[20];
	int i;
       //	clrscr();

	FILE *fp;
	clrscr();
	fp=fopen("prog.txt","w");
	for(i=0;i<5;i++)
	{
		printf("\nEnter the name");
		scanf("%s",name);
		fprintf(fp,"%s\n",name);
	}
	fclose(fp);
	fp=fopen("prog.txt","r");
	printf("\nthe names are:\n");
	for(i=0;i<5;i++)
	{
		fscanf(fp,"%s\n",name);
		printf("%s\n",name);
	}

getch();
}