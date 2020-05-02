/*
				Author:- KARSHIL SHETH
				Objective:-4DIMENSIONAL MATRIX	
				Date:- 11-02-2018
*/
void main()
{
	int a[10][10][10][10],i,j,r,c,p,p1,k,m,l;
	clrscr();
	printf("\n Enter number of rows : ");
	scanf("%d",&r);
	printf("\n Enter number of columns : ");
	scanf("%d",&c);
	printf("\n Enter number of page : ");
	scanf("%d",&p);
	printf("\n Enter the page 2 : ");
	scanf("%d",&p1);
	printf("\n Enter the matrix  of %d elements : ",r*c*p*p1);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<p;k++)
			{
				for(l=0;l<p1;l++)
				{
					scanf("%d",&a[i][j][k][l]);
				}
			}
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c-1;j++)
		{
			for(k=0;k<p;k++)
			{
				for(l=0;l<p1;l++)
				{
					printf("%d ",a[i][j][k][l]);
				}
				printf("\t");
				for(m=0;m<p1;m++)
				{
					printf("%d ",a[i][j+1][k][m]);
				}
				printf("\n");
			}
		}
		printf("\n");
	}
	getch();
}