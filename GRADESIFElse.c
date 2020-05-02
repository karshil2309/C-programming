/*
	Programmer name :  Karshil Sheth
	DOC : 01/04/2017
	Programme : Grades of students ( ladder if..else...)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,m3,total;
	float avg;
	clrscr();
	printf("\n \t\tEnter marks between 1 to 100 ");
	printf("\n\n\n Enter the marks of student 1 =");
	scanf("%d",&m1);
	printf("\n Enter the marks of student 2 =");
	scanf("%d",&m2);
	printf("\n Enter the marks of student 3 =");
	scanf("%d",&m3);
	total=m1+m2+m3;
	printf("\n Total is =%d ",total);
	avg=total/3;
	printf("\n The Average is= %f ",avg);
	if(avg>=70)
	       {
		printf("\n  A");
	       }
	else if(avg>=60)
		{
		printf("\n  B");
		 }
	else if(avg>=50)
		 {
		printf("\n  C");
		  }
	else
		{
		printf("\n \t You are fail !! sorry ");
		 }


	getch();
}

