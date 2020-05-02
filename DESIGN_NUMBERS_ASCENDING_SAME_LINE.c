/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-TO DESIGN NUMBERS IN SAME LINE IN ASCENDING. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,n;
	clrscr();
	printf("\n Enter num at generate series : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",i);
		}
		printf("\n");
	}
	getch();
}