/*
	Programmer name : Karshil Sheth
	DOC : 02/04/2017
	Programme : MARKS AND GRADES
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,m3,total;
	float avg;
	clrscr();
	printf("\n Enter marks 1 : ");
	scanf("%d",&m1);
	printf("\n Enter marks 2 : ");
	scanf("%d",&m2);
	printf("\n Enter marks 3 : ");
	scanf("%d",&m3);
	total=m1+m2+m3;
	printf("\n Total is = %d",total);
	avg=total/3;
	printf("\n Average is = %f",avg);
	if(avg>=85)
	  {
		printf("\n \t  Grade is A ");
	  }
	else if(avg>=75)
	  {
		printf("\n  \t GRADE is B");
	  }
	else if(avg>=35)
	  {
		printf("\n \t PASS ");
	  }
	else
	  {
		printf("\n \t FAIL");
	  }
	getch();
}