/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-FINDING THE DETERMINANT OF MATRIX. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,a[2][2],d;
	clrscr();
	printf("\n Enter matrix of 4 elements :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n your matrix is : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
//	printf("\n Determinant is : \n");

		d=(a[0][0]*a[1][1]-a[1][0]*a[0][1]);

		if(d<0)
		{
			d=-d;
		}
	printf("\n Determinant of the matrix is :");
	{
		printf("\n %d",d);
	}
/*	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		}

	} */


	getch();
}