/*
	PROGRAMMER NAME : Karshil Sheth
	DOC : 16/04/2017
	PROGRAMME : SWITCH CASE : HOTEL MENU
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int menu,dish,g,p,s;
	clrscr();
	printf("\n Choose your dish type from below : \n\t\n    ");
	printf("\n 1) Vegitarian ");
	printf("\n 2) Non- Vegitarian \n  ");
	scanf("%d",&menu);
	switch(menu)
	{
		case 1 :printf("\n\t\t\t\t VEGITARIAN MENU  ");
			printf("\n Choose your food variety :\n\t     ");
			printf("\n 1) Gujarati ");
			printf("\n 2) Punjabi");
			printf("\n 3) South-Indian ");
			scanf("%d",&dish);
		switch(dish)
			{
				case 1 : printf("\n\t\t Famous GUJARATI dishes are  :\n\t ");
					 printf("\n 1) Channa - masala");
					 printf("\n 2) Dal - Dhokdi");
					 printf("\n 3) Dhokda - khaman");
					 printf("\n 4) Jeera rice - dal fry");
					 scanf("%d",&g);
					 printf("\n Your ordered is noted , you will receive in few minutes : Thanks for order  ");
					 break;
				case 2 : printf("\n\t\t Favourite PUNJABI dishes are : \n\t");
					 printf("\n 1) Veg-Kholhapuri");
					 printf("\n 2) Veg - Handi");
					 printf("\n 3) Kashmiri _ khofta");
					 printf("\n 4) Navratn - Korma");
					 scanf("%d",&p);
					 printf("\n Your ordered is noted , you will receive in few minutes : Thanks for order  ");
					 break;
				case 3 : printf("\n\t\t SOUTH-INDIAN dishes are: \n \t");
					 printf("\n 1) Plain dosa ");
					 printf("\n 2) Masala - dosa ");
					 printf("\n 3) Rawa Masala dosa");
					 printf("\n 4) Idli- sambhar");
					 scanf("%d",&s);
					 printf("\n Your ordered is noted , you will receive in few minutes : Thanks for order  ");
					 break;
				default : printf("\n Your choice is not valid \n \n please enter valid choice");


				}

				break;

	     case 2 : printf("\n Not available ;)");
		      break;

	}


	getch();
}