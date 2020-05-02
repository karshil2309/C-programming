/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-DESIGN OF * IN DESCENDING. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,n,k;
	clrscr();
	printf("\n Enter to generate the series : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("\n");
		for(k=(n-i);k>=0;k--)
		{
			printf(" ");
		}
		for(j=i;j>0;j--)
		{
			printf(" * ");
		}
	}
	getch();
}