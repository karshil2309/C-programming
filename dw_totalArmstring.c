/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-TOTAL ARMSTRONG USING DO..WHILE... 
	DATE:- 13-02-2018
*/
void main()
{
	int i,n,j,sum=0,count=0;
	clrscr();
	i=1;
	do{
		sum=0;
		j=i;
		do{
			n=j%10;
			sum=sum+(n*n*n);
			j=j/10;
		}while(j>0);
		if(sum==i)
		{
			count++;
			printf("\n %d",i);
		}
		i++;
	}while(i<=1000);
	printf("\n Total armstrong =%d",count);
	getch();
}