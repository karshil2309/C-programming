/*
	PROGRAMMER NAME :  Karshil Sheth
	DOC : 23/04/2017
	PROGRAMME : GRADES OF STUDENTS
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,total;
	float avg;
	clrscr();
	printf("\n Enter the marks m1 = ");
	scanf("%d",&m1);
	printf("\n Enter the marks m2 = ");
	scanf("%d",&m2);
	total=m1+m2;
	printf("\n Total marks are =%d",total);
	avg=total/2;
	printf("\n Average marks is =%f",avg);
	printf("\n Grades of student is ");
	if(avg>90)
	{
		printf("\n A+");
	}
	else if(avg>85)
	{
		printf("\n A ");
	}
	else if(avg>75)
	{
		printf("\n B");
	}
	else if(avg>60)
	{
		printf("\n C");
	}
	else if(avg>45)
	{
		printf("\n D");
	}
	else if(avg>35)
	{
		printf("\n F");
	}
	else
	{
		printf("\n Fail ");
	}
	getch();
}