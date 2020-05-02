/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-SUM OF MATRIX IN ONE LINE. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,a[3][3],b[3][3],c[3][3],sum=0,d,k,l;
	clrscr();

//	first matrix

	printf("\n Enter the matrix of 9 elements : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Marix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

//	printf("\n sum of elements of the matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("\n sum is :%d ",sum);

	// 2nd matrix
	printf("\n enter the second matrix : \n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("\n 2nd matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	// sum of matrix
	printf("\n The sum of the matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d   ",a[i][j]);
		}
		if(i==1)
		{
			printf(" +");
		}
		for(k=0;k<3;k++)
		{
			printf("\t%d",b[i][k]);
		}
		if(i==1)
		{
			printf(" =");
		}
		for(l=0;l<3;l++)
		{
			printf("\t%d",c[i][l]);
		}

		printf("\n");
	}
	getch();
}