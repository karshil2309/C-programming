/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-LOGIC OF PAL,PRIME,ARMS. 
	DATE:- 13-02-2018
*/
#include<stdio.h>
#include<conio.h>

void numPrime()
{
	int i,j,count=0;
	for(i=1;i<=1000;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d ",i);
		}
	}
}
void armFun()
{
	int i,j,sum=0,n;
	for(i=1;i<=1000;i++)
	{
		sum=0;
		for(j=i;j>0;)
		{
			n=j%10;
			sum=sum+(n*n*n);
			j=j/10;
		}
		if(i==sum)
		{
			printf("%d ",i);
		}
	}
}
void paliFun()
{
	int i,j,dup=0,revNo=0,temp=0;
	for(i=1;i<=1000;i++)
	{
		temp=0;revNo=0;
		dup=i;
		for(j=i;j>0;)
		{
			temp=j%10;
			revNo=(revNo*10)+temp;
			j=j/10;
		}
		if(dup==revNo)
		{
			printf("%d ",dup);
		}
	}
}
void sumFun()
{
	int i,j,temp,sum;
	for(i=1;i<=1000;i++)
	{
		sum=0;
		for(j=i;j!=0;j=j/10)
		{
			temp=j%10;
			sum=sum+temp;
		}
		if(sum>8)
		{
			printf("\t%d ",i);
		}
	}
}