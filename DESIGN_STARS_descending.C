/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-to design * in ascending  
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,n;
	clrscr();
	printf("\n Enter number to generate the series : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("*");
		}
	}	printf("\n")
	getch();
}