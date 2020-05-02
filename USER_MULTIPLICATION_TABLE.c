/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-MULTIPLICATION TABLE OF USER NUMBER. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,n;
	clrscr();
	printf("\n Enter any number : ");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("\n %d*%d=%d",n,i,n*i);
		i++;

	}while(i<=10);
	getch();
}