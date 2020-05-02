/*
		Author:- KARSHIL SHETH
		Objective:-PRINT 1 TO 100 PRIME NUMBERS. 
		Date:-	12-02-2018
*/

void main()
{
	int i,count=0;
	clrscr();
	for(i=1;i<=100;i++)
	{
		if(100%i==0)
		{
			if(count==2)
			{
				printf("\n Prime number is = %d",i);
			}
		}
	}



	getch();
}