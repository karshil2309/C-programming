/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-TO PRINT NUMBERS IN INCREASING ORDER IN ASCENDING. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,k=1,n;
	clrscr();
	printf("\n Enter any num to generate the series : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",k);
			k++;
		}
		printf("\n");
	}
	getch();
}