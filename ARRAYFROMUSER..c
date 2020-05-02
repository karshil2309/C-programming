/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-DYNAMIC ARRAY. 
	DATE:- 13-02-2018
*/
void main()
{
	int a[10][10][10],i,j,r,c,p,k,m;
	clrscr();
	printf("\n Enter number of rows : ");
	scanf("%d",&c);
	printf("\n Enter number of columns : ");
	scanf("%d",&p);
	printf("\n Enter number of page : ");
	scanf("%d",&r);
	printf("\n Enter the matrix of %d elements : ",r*c*p);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<p;k++)
			{
				scanf("%d",&a[i][j][k]);
			}
		}
	}

	for(i=0;i<r-1;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<p;k++)
			{
				printf("%d ",a[i][j][k]);
			}
			printf("\t");
			for(m=0;m<p;m++)
			{
				printf("%d ",a[i+1][j][m]);
			}
			printf("\n");
		}
		printf("\n");
	}
	getch();
}