/*
		Author:- KARSHIL SHETH
		Objective:-Practice of structure. 
		Date:-	12-02-2018
*/
#include<stdio.h>
#include<conio.h>
void create();
void display();
void search();
void get_topper();
struct std
{
	char name[20];
	int id,m1,m2,m3;
}s[3];
void main()
{
	int ch;
	while(1)
	{
		
		printf("\n Enter your choice from below : ");
		printf("\n 1)Create");
		printf("\n 2)Display");
		printf("\n 3)Search by id");
		printf("\n 4)Get Topper");
		printf("\n 5)Exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://create
				create();
				break;

				case 2: //Display
				display();
				break;

	  /*		case 3: // search by id
				search();
				break;

			case 4: // Get topper
				get_topper();
				break;  */
			case 5: exit(0);

		}
	}

}
void create()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("\n Enter your name : ");
		scanf("%s",s[i].name);
		printf("\n Enter your id : ");
		scanf("%d",&s[i].id);
		printf("\n Enter marks of three subjects  :");
		scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
	}


}
void display()
{
	int i;
	printf("\nNAME\tID\tm1  m2  m3");
	for(i=0;i<3;i++)
	{
		printf("\n%s\t%d\t%d %d %d",s[i].name,s[i].id,s[i].m1,s[i].m2,s[i].m3);
	}
}