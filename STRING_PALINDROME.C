/*
		Author:- KARSHIL SHETH
		Objective:-To CHECK WHETHER THE STRING IS PALINDROME OR NOT. 
		Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char c[10],i,j;
	int len,flag;
	clrscr();
	printf("\nEnter the string to find it is palindrome or not:");
	fflush(c);
	scanf("%s",&c);
	printf("the string is %s",c);

	len=0;
	for(i=0;c[i]!='\0';i++)
	{
		len++;

	}
	printf("\n the length is %d",i);
	flag=0;
	for(i=0,j=(len-1);i<len;i++,j--)
	{
		if(c[i]!=c[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n it is palindrome  ");
	}
	else
	{
		printf("\nit is not palindrome");
	}

getch();
}