/*
		Author:- KARSHIL SHETH
		Objective:-TO PRINT 8 ELEMENTS IN A MATRIX. 
		Date:-	12-02-2018
*/
void main()
{
	int a[2][2][2][2];
	int i,j,k,m;
	clrscr();
	printf("\n Enter 8 elements for matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				for(m=0;m<2;m++)
				{
					scanf("%d",&a[k][i][j][m]);
				}
			}
		}
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				for(m=0;m<2;m++)
				{
					printf("%d ",a[m][k][i][j]);
				}
				printf("\t");
			}
			printf("\n");
		}
	}

	getch();
 }