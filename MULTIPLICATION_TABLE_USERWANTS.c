/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-MULTIPLICATION NUMBER UPTIL USER WANTS 
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,n;
	clrscr();
	printf("\n Enter Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("\n %d*%d=%d ",i,j,j*i);
		}
	}
	getch();
}