/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-SUM OF MATRICES 
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,sum=0,a[3][3];
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("\n Sum of elements = %d ",sum);

	getch();
}