/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-DIFFERENCE OF EVEN OR ODD. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,evenSum=0,oddSum=0,diff;
	clrscr();
	i=1;
	do
	{
		if(i%2==0)
		{
			evenSum=evenSum+i;
		}
		else
		{
			oddSum=oddSum+i;
		}
		i++;
	}
	while(i<=50);
	printf("\n Even sum = %d",evenSum);
	printf("\n odd sum = %d",oddSum);
	diff=evenSum-oddSum;
	printf("\n diff=%d",diff);
	getch();
}