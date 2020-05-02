/*
				Author:- KARSHIL SHETH
				Objective:-TO PERFROM ARMSTRONG NUMBER USING DO..WHILE..	
				Date:- 11-02-2018
*/
void main()
{
	int i ,j,n,sum=0;
	clrscr();
	i=1;
	do
	{
		sum=0;
		j=i;
		do
		{
			n=j%10;
			sum=sum+(n*n*n);
			j=j/10;
		}
		while(j>0);
		if(i==sum)
		{
			printf(" %d ",i);
		}
		i++;
	}
	while(i<=1000);
	getch();
}