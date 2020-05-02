/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-DESIGN * IN ASCENDING 
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,n,k;
	clrscr();
	printf("\n Enter to generate the series : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(k=n;k>=0;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
	}
	getch();
}