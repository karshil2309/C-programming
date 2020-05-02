/*
				Author:- KARSHIL SHETH
				Objective:-TO PRINT PRIME NUMBERS BETWENN 101 TO 999.	
				Date:- 11-02-2018
*/

void primeFun()
{
	int i,j,no,count,k,l;
	clrscr();

	for(i=101;i<=999;i++)
	{
		k=(i/10)%10;
		j=k;
	   count=0;
	   for(k=1;k<=j;k++)
	   {
		if(j%k==0)
		{
			count++;
		}
	   }
	   if(count==2)
	   {
		printf("\t%d",i);
	   }
	}
 getch();
}