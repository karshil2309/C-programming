/*
	PROGRAMMER NAME : karshil
	DOC : 05/04/2017
	PROGRAMME : AREA AND CIRCUMFERENCE
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,h,b,w,l;
	float A,C;
	clrscr();
	printf("\n\t\t AREA AND CIRCUMFERENCE OF CIRCLE ");
//	area = pi*r*r , circumference = 2*pi*r

	printf("\n Enter the radius r = ");
	scanf("%d",&r);
	A=3.14*r*r;
	printf("\n Area is = %f",A);
	C=2*3.14*r;
	printf("\n Circumference is =%f",C);


	 printf("\n\n\t\tAREA OF TRIANGLE");
//     area = 0.5*b*h

	printf("\n\n Enter the height h= ");
	scanf("%d",&h);
	printf("\n Enter the breadth b = ");
	scanf("%d",&b);
	A=0.5*b*h;
	printf("\n Area of Triangle is =%f",A);

	printf("\n\n \t AREA AND CIRCUMFERENCE OF RECTANGLE ");
//	area=l*b,circumference=2*l*b
	printf("\n Enter length l = ");
	scanf("%d",&l);
	printf("\n Enter width w = ");
	scanf("%d",&w);
	A=l*w;
	printf("\n Area is = %f",A);
	C=2*l*w;
	printf("\n Circumference is = %f",C);
	getch();
}


