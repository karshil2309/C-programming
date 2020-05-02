/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-PRIME NUMBERS 1 TO 1000 USING DO WHILE. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,n,j,count=0,primeTotal=0;
	clrscr();
	i=1;
	do{
		count=0;
		j=1;
		do{

			if(i%j==0)
			{
				count++;
			}
			j++;
		}while(j<=i);
		if(count==2)
		{
			primeTotal++;
			printf(" \n%d",i);
		}
		i++;
	}while(i<=1000);
	printf("\n Total prime = %d",primeTotal);
	getch();
}