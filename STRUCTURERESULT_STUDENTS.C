/*
				Author:- KARSHIL SHETH
				Objective:-TO PRINT RESULT OF FIVE STUDENT USING STRUCTURE.	
				Date:- 11-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	struct stduent
	{
		char name[20];
		int m1,m2,m3;

	};
	struct stduent s[5];
	int i=0,per[5];
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("\nEnter name");
		scanf("%s",&s[i].name);
		printf("\n enter the marks of subjects:");
		scanf("%d\n%d\n%d",&s[i].m1,&s[i].m2,&s[i].m3);

		per[i]=(s[i].m1+s[i].m2+s[i].m3)/3;
		//s[i].r.per=(s[i].m1+s[i].m2+s[i].m3)/3;
	}
	for(i=0;i<5;i++)
	{
		printf("\n name is %s\n m1 is%d\nm2 is %d\nm3 is %d\nperce is%d\n",s[i].name,s[i].m1,s[i].m2,s[i].m3,per[i]);
	}
	getch();
}