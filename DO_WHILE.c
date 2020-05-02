/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-SIMPLE DO..WHILE... 
	DATE:- 13-02-2018
*/
void main()
{
	int i,sum=0;
	clrscr();
	i=1;
	do
	{
		sum=sum+i;
		printf("\n %d",i);
		i++;

	}
	while(i<=5);
	printf("\n Sum=%d",sum);
	getch();
}