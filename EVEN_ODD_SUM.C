/*
	Author:- KARSHIL SHETH
	Objective:-TO CHECK AND SUM OF EVEN ODD. 
	Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
int oddFun(int no);
int evenFun(int no);
int addFun(int esum,int osum);
void main()
{
	int no,total,x,y,esum=0,osum=0;
	clrscr();
	printf("Enter No =  ");
	scanf("%d",&no);
	esum=evenFun(no);
	osum=oddFun(no);
	printf("\neven digit = %d",esum);
	printf("\nodd digit = %d",osum);
	total=addFun(esum,osum);
	printf("\nTotal is = %d",total);
	getch();
}
int evenFun(int no)
{
	int x,esum=0;
	while(no>0)
	{
		x=no%10;
		if(x%2==0)
		{
			esum=esum+x;
		}
		no=no/10;
	}
	return esum;

}

int oddFun(int no)
{
	int osum ,y;
	while(no>0)
	{
		y=no%10;
		if(y%2!=0)
		{
			osum=osum+y;
		}
		no=no/10;
	}
	return osum;

}
int addFun(int esum,int osum)
{
	int total;
	total =esum+osum;
	return total;
}

