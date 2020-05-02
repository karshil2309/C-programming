/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-DESIGN IN ASCENDING NUMBERS. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,n;
	clrscr();
	printf("\n enter any num to generate series : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}