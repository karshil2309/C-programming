/*
	PROGRAMMER NAME :  Karshil Sheth
	DOC : 05/04/2017
	PROGRAMME : GRADES
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,m3,total;
	float avg;
	clrscr();
	printf("\n enter the marks m1 = ");
	scanf("%d",&m1);
	printf("\n enter the marks m2 = ");
	scanf("%d",&m2);
	printf("\n enter the marks m3 = ");
	scanf("%d",&m3);
	total=m1+m2+m3;
	printf("\n total is = %d",total);
	avg=total/3;
	printf("\n Average is = %f",avg);
	if(avg>=85)
	      {
		printf("\n Grade is A");
	      }
	else if(avg>=75)
	      {
		printf("\n Grade is B");
	      }
	else if(avg>=55)
	     {
		printf("\n Grade is C");
	     }
	else if(avg>=35)
	     {
		printf("\n PASS");
	     }
	else
	    {
		printf("\n FAIL");
	    }
	getch();
}