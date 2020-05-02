/*
		Author:- KARSHIL SHETH
		Objective:-TO SORT THE ARRAY IN ASCENDING ORDER. 
		Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,*p,*q,rev,j,temp=0;
	clrscr();
	p=&a[0];
	for(i=0;i<5;i++)
	{
	      printf("\nplease enter the array");
	      scanf("%d",p);
	      p++;
	}
	p=&a[0];
	for(i=0;i<5;i++)
	{
	      printf("\n the array is %d",*p);
	      p++;
	}
	p=&a[4];
	for(i=4;i>=0;i--)
	{
	      printf("\n the array is %d",*p);
	      p--;
	}

	p=&a[0];

	for(i=0;i<5-1;i++)
	{
	  p=&a[i];
		for(j=(i+1);j<5;j++)
		{
		    q=&a[j];
			if(*p > *q)
			{
				temp=*p;
				*p=*q;
				*q=temp;
			}
		      q++;
		}
	     p++;
	}
    /*	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-1;j++)
		{
			printf("%d",a[j]);
		}
		printf("\n");
	} */
	p=&a[0];

	printf("\n Ascending order : \n");
	for(j=0;j<5;j++)
	{
		printf(" %d ",*p);
		p++;
	}

getch();
}