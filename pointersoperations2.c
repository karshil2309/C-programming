/*
	Author:- KARSHIL SHETH
	Objective:-Pointeroperation. 
	Date:-	12-02-2018
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	int num=26;
	int *ptr;
	ptr = &num;
	clrscr();
	cout<<endl<<"the vakue of num is:"<<num;
	*ptr=*ptr+10;
	cout<<endl<<"the value idd num after pointer increment"<<num;
	getch();
}