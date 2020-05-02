/*
		Author:- KARSHIL SHETH
		Objective:-PRINT THE REVERSE OF SUM. 
		Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0,revNo=0,temp=0,sum1=0;
	clrscr();
	i=1;
	while(i<=50)
	{
		if(i%2==1)
		{
			printf("\t I : %d",i);
		}
		if(i%2==0)
		{
			sum=sum+i;
		}
		i++;
	}
	printf("\n sum =%d",sum);
	while(sum>0)
	{
		temp=sum%10;
		revNo=(revNo*10)+temp;
		sum=sum/10;
	}
	printf("\n revNo= %d",revNo);
	getch();

}