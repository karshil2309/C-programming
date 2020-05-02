/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-DO WHILE FOR SUM. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,sum=0;
	clrscr();

	i=5;
	do
	{
	   sum=sum+i;
	   printf("\n%d",i);
	   i--;

	}while(i>0);

	printf("\nSum : %d",sum);




	getch();
}