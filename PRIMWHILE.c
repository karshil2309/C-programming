/*
		Author:- KARSHIL SHETH
		Objective:-PRIME NUMBER USING WHILE LOOP 
		Date:-	12-02-2018
*/
void main()
{
	int i,j,count=0,primeTotal=0;
	clrscr();
	j=1;
	while(j<=1000)
	{
		count=0;
		i=1;
		while(i<=j)
		{
			if(j%i==0)
			{
				count++;
			}
			i++;
		}
		if(count==2)
		{
			primeTotal++;
			printf("\t %d",j);
		}
		j++;
	}
	printf("\n\n\n PrimeTotal = %d",primeTotal);
	getch();
}