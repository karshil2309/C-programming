/*
		Author:- KARSHIL SHETH
		Objective:-To find Max and then Reverse. 
		Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int rev(int);
int  max(int ,int);
void main()
{
	int a=6,b=12,i,j;
	clrscr();
	i=max(a,b);
	printf("\n max is %d",i);
	j=rev(i);
	printf("\n rev is %d",j);
	getch();

}
int max(int a,int b)
{
     if(a>b)
     {
       return a;
       //	printf("%d",a);
     }
     else
     {
	return b;
     //	printf("%d",b);
     }

}
int rev(int p)
{
	int q=0,s;
	while(p>0)
		{
			s=p%10;
			q=(q*10)+s;
			p=p/10;
		}
		return q;
}