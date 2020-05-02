/*
				Author:- KARSHIL SHETH
				Objective:-TO PERFROM THE MULTIPLICATION OF A MATRIX.	
				Date:- 11-02-2018
*/
void main()
{
	int i,j,a[3][3],b[3][3],d,c[3][3],k;
	clrscr();
	printf("\n Enter 1st matrix of 9 elements : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Enter 2nd matrix of 9 elements ; \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n your 1st matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Your 2nd matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n Multiplication of the matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			d=0;
			for(k=0;k<3;k++)
			{
				d=d+a[i][k]*b[k][j];
			}
			c[i][j]=d;
		}
	}
	printf("\n Matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	getch();
}