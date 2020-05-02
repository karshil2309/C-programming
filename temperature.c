/*
	PROGRAMMER NAME : KARSHIL SHETH
	DOC : 25/04/2017
	PROGRAMME : CELSIUS TO FAHRENHEIT.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();
	printf("\n Enter temp in Celsius Degree : ");
	scanf("%f",&c);
	f=(1.8*c)+32;
	printf("\n The Degree Fahrenheit = %f ",f);


	printf("\n\n Enter temp in Fahrenheit :");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("\n Degree celsius =%f",c);
	getch();
}