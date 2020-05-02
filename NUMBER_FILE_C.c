/*
		Author:- KARSHIL SHETH
		Objective:-To ENTER TEN NUMBERS USING FILE. 
		Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int i,j,x;
	int a[10];
	clrscr();
	for(i=0;i<5;i++)
	{
	printf("\nEnter the ten numbers:");

	scanf("%d",&a[10]);
	}
	fp=fopen("number.txt","w");
	for(j=0;j<10;j++)
	{
		putw(a[i],fp);
	}
	fclose(fp);
	fp=fopen("number.txt","r");
	x=getc(fp);
	printf("the numbers are %d",x);
	fclose(fp);
	getch();
}