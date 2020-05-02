/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-PRINT SERIES OF NUMBERS IN REVERSES. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,k,n;
	clrscr();
	printf("\n Enter the series limit");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(k=(n-1);k>0;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");

	}
	getch();
}