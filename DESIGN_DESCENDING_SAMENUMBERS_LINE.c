/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-TO PRINT SAME NUMBER IN ONE LINE IN DESCENDING 
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,n;
	clrscr();
	printf("\n Enter num to generate series :");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",i);
		}
		printf("\n");
	}
	getch();
}