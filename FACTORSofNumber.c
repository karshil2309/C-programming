/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-FACTORS OF NUMBERS USING FOR LOOP. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,n,count=0;
	clrscr();
	printf("\n Enter any number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("\n Factors are  %d : ",i);
		}
	}
	getch();
}