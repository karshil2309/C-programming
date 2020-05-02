/*
				Author:- KARSHIL SHETH
				Objective:-TO CHECK WHETHER THE NUMBER IS PRIME OR NOT.	
				Date:- 11-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,count;
	clrscr();
	scanf("%d",&no);
	count=0;
	for(i=1;i<=no;i++)
	{
		if(no%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("\n it is prime  ");

	}
getch();
}