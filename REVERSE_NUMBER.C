/*
		Author:- KARSHIL SHETH
		Objective:-REVERSE THE GIVEN NUMBER. 
		Date:-	12-02-2018
*/void main()
{
	int i,j,n,n1;
	clrscr();
	printf("\n Reverse of the entered number  ");
	printf("\n Enter any num : ");
	scanf("%d",&n);
	n1=n;
	printf("\n Reverrse of the number = \n");
	for(;n>0;n=n/10)
	{
		j=n%10;
		printf("%d",j);
	}
	getch();
}