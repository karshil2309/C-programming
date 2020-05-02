/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-pALINDROME USING DO..WHILE... LOOP 
	DATE:- 13-02-2018
*/
/*
	Palindrome is number whish is same when seen from both sides.
*/
void main()
{
	int n,n1,sum=0;
	clrscr();
	printf("\n Enter any number : ");
	scanf("%d",&n);
	do
	{
		i=n%10;
		sum=(sum*10)+i;
		n=n/10;
	}
	while(n>0);
	getch();
}

