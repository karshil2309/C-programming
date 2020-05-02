/*
		Author:- KARSHIL SHETH
		Objective:-TO FIND THE POWER OF INTEGER USING C. 
		Date:-	12-02-2018
*/
void main()
{
	int i,base,power=1,n;
	clrscr();
	printf("\n Enter base and num  : ");
	scanf("%d %d",&base,&n);
	i=1;
	while(i<=n)
	{
		power=power*base;
		i++;
	}
	printf("\n Power =%d",power);
	getch();
}