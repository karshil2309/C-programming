/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-TWIN NUMBER 
	DATE:- 13-02-2018
*/

/*
		TWIN NUMBER is a number whose sum and
		multiplication gives same number.

		for example : 123 ;sum = 1+2+3=6 and mul. = 1*2*3=6
*/

void main()
{
	int n,m=1,sum=0,i;
	clrscr();
	printf("\n Enter a number : ");
	scanf("%d",&n);
	do
	{
		i=n%10;
		sum=sum+i;
		m=m*i;
		n=n/10;
	}
	while(n>0);
	{
		if(sum==m)
		{
			printf("\n Num is twin number ");
		}
		else
		{
			printf("\n Num is not twin number ");
		}
	}

	getch();
}