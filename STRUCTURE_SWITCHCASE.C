/*
	Author:- KARSHIL SHETH
	Objective:-     Id
		    	name
			m1
			m2
			m3
			take number of students=;
			1. create  (###)
			2. display (###)
			3. search by id  (###)
			4. get topper=> user will  decide number of toppers he wants (###)
			5. wish me=> wishes student on his bday.
			0. exit  (###)
	Date:-   12-02-2018
*/
#include<stdio.h>
#include<conio.h>


struct student
{
	int id,to;
	char name[20],mon[20];
	int m1,m2,m3;
	int dt,yr,ag;
}s[25],e[25];

int ageFun(int year)
{
	int pres=2017;
	int age;

	age = pres-year;

	return(age);
}

void createFun(int no)
{
	int i,c;



	for(i=0 ; i<no ;i++)
	{
	   //c=0;
		printf("\n\nEnter Student id       : ");
		scanf("%d",&s[i].id);

		printf("Enter Student name       : ");
		scanf("%s",&s[i].name);

		printf("Enter B'day (date/mon/year) : ");
		scanf("%d%s%d",&s[i].dt,&s[i].mon,&s[i].yr);

		s[i].ag=ageFun(s[i].yr);

		printf("Enter Marks of Maths     : ");
		scanf("%d",&s[i].m1);

		printf("Enter Marks of Physics   : ");
		scanf("%d",&s[i].m2);

		printf("Enter Marks of Chemistry : ");
		scanf("%d",&s[i].m3);

	       s[i].to=s[i].m1 + s[i].m2 + s[i].m3;

		printf("Total marks              :%d ",s[i].to);


	}


}//crt fun end

void  displayFun(int no)
{
       int i;
      // struct student s[25];
       clrscr();

       printf("ID\tName\tAge\tmaths\tphysics\tchemistry\tTotal");

       for(i=0 ; i<no ; i++)
       {
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t     %d",s[i].id,s[i].name,s[i].ag,s[i].m1,s[i].m2,s[i].m3,s[i].to);
       }


}//disply fun end

void searchFun(int no)
{
	int sr,i;
	clrscr();

	printf("\nEnter student id : ");
	scanf("%d",&sr);

	//printf("-->   %d",no);
	for(i=0 ; i<no ;i++)
	{
		if(s[i].id==sr)
		{
			printf("\n\nName          : %s",s[i].name);
			printf("\nMaths marks     : %d",s[i].m1);
			printf("\nPhysics marks   : %d",s[i].m2);
			printf("\nChemistry marks : %d",s[i].m3);
			printf("\nTotal marks     : %d",s[i].to);
		}
	}


}//srch fun end

void topperFun(int no)
{
	int cnt=0,no1,i,tmp;
	int cn,j;
	clrscr();
	jp:
	printf("\nEnter number of toppers you want : ");
	scanf("%d",&no1);
	if(no1>no)
	{
		printf("\nThere are only %d students");
		goto jp;
	}
	cnt=0;
	for(i=0 ; i<(no-1) ;i++)
	{
		//if(cnt!=no1)
		//{
		   for(j=(i+1) ; j<no ; j++)
		   {
			if(s[j].to < s[i].to)
			{
			      e[i]=s[j];
			      s[j]=s[i];
			      s[i]=e[i];
			      cnt++;
			}
		   //}
		}//if end
	}
	cn=1;
	for(i=0 ; i<no1 ;i++)
	{
		printf("\n%d Rank is of %s",cn,s[i].name);
		cn++;
	}
}//tppr fun end */

void wishmeFun(int no)
{
	char srh[15];
	int  i,j;
	clrscr();

	printf("\nEnter Month : ");
	scanf("%s",&srh);

	for(i=0 ; i<no ;i++)
	{
		if( (strcmp(s[i].mon,srh)==0) )
		{
			printf("\n\n%s has birthday on %s month  %d.",s[i].name,s[i].mon,s[i].dt);
			printf("\n%s is %d years old.",s[i].name,s[i].ag);
		}
		else
		{
			printf("\n you have no birthdays on this month");
		}
	}

}//wish me end


void main()
{
	int no,ch;//b[4],j=0;
	clrscr();
	textcolor(CYAN+BlINK);
	textbackground(RED);
	printf("Enter Number of students : ");
	scanf("%d",&no);
	c:
	printf("\n1 to create student profile.");
	printf("\n2 to display marksheet.");
	printf("\n3 to search student by id.");
	printf("\n4 to get topper.");
	printf("\n5 wishme.");
	printf("\n0 to exit.");
	printf("\n\nMake your choice : ");
	scanf("%d",&ch);

	switch(ch)
	{//swtc strt
		case 1:
			createFun(no);
			getch();
		goto c;

		case 2:

			displayFun(no);
			getch();
		goto c;

		case 3:
			searchFun(no);
			getch();
		goto c;

		case 4:
			topperFun(no);
			getch();
		goto c;
		case 5:
			wishmeFun(no);
			getch();
		goto c;

	}//swtch end

getch();
}