#include<stdio.h>
#include<conio.h>
#include<string.h>
/*

		Author:- KARSHIL SHETH
		Objective:- take 10 numbers from user and store into number.txt read numbers from number.txt
		       	    and filter it,if number is odd then write into odd.txt and number is even then write in even.txt/
			    last to diplay all files
			    [numbers.txt,odd.txt,even.txt]
		Date:- 12-02-2018
*/
void main()
{
	int i;
	FILE *fp;
	char d[10],x;
	clrscr();

       //	FILE *fp;

	printf("\n enter the name");
	gets(d);

	fp=fopen("datat.txt","w");
	for(i=0;d[i]!='\0';i++)
	{
	putc(d[i],fp);
	}
	fclose(fp);

	fp=fopen("datat.txt","r");
	printf("\nenter name is\n");
	while(1)
	{
		x=getc(fp);
		if(x==-1)
		{
			break;
		}
		printf("%c",x);
	}
	fclose(fp);



getch();
}