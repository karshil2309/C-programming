/*
+	PROGRAMMER NAME : Karshil Sheth
	DOC : 15/04/2017
	PROGRAMME : SWITCH CASE :( NUM : DIGIT)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("\n Enter number between 1 to 5       ");
	scanf("%d",&n);
	switch(n)
	{
		case 1 : printf("\n ONE  for num %d ");
		break;
		case 2 : printf("\n TWO for num %d");
		break;
		case 3 : printf("\n THEREE for num %d ");
		break;
		case 4 : printf("\n FOUR for num %d ");
		break;
		case 5 : printf("\n FIVE for num %d ");
		break;
		default : printf("\n Entered number is out of range ");
	}
	getch();
}