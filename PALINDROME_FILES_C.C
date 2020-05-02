/*
	Author:- KARSHIL SHETH
	Objective:-TO CHECK STRING IS PALINDROME OR NOT USING FILES IN C. 
	Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *fp,*fp1;
	int i,len,flag=1;
	char str[10],dup[10],dup1[10];
	clrscr();

	printf("Enter String : ");
	gets(str);

	fp = fopen("string.txt","w");

		for(i=0 ; i < (strlen(str)) ; i++)
		{
			putc(str[i],fp);
		}
	fclose(fp);

	fp1 = fopen("rev.txt","w");

	printf("Reverese : ");

	for(i=strlen(str)-1 ; i>=0 ; i--)
	{
		putc(str[i],fp1);
		printf("%c",str[i]);
	}
       //	dup[i]='\0';
	fclose(fp1);

	fp = fopen("string.txt","r");

	i=0;
	while(1)
	{
			dup[i]=getc(fp);

			if(dup[i]==-1)
			{
				break;
			}
			i++;
	       }
	       dup[i]='\0';
	fclose(fp);


	fp1 = fopen("rev.txt","r");

	    i=0;
	       while(1)
	       {
			dup1[i]=getc(fp);

			if(dup1[i]==-1)
			{
				break;
			}
			i++;
	       }
	       dup1[i]='\0';
	fclose(fp1);
      //	printf("\n---->%s",dup);
       //	printf("\n---->%s",dup1);

      /*	if( (strcmp(dup,dup1)==0) )
	{
		printf("\nThe String is Pallindrome.");
	} //*/
      //	dup1[i]='\0';

	for(i=0 ; i<(strlen(str)) ; i++)
	{
		if(dup[i] != dup1[i])
		{
		      flag=0;
		}
	       /*	else
		{
			flag=1;
		}*/
	}
	if(flag==1)
	{
		printf("\nthe String is  Pallindrome.");
	}
	else
	{
		printf("\n the string is not  palindrome.");
	}

getch();
}