
/*
		Author:- KARSHIL SHETH
		Objective:-SORT OF 2D MATRIX. 
		Date:-	12-02-2018
*/
void main()
{
	int i,j,a[3][3],k,b[9],m,count=0,d[3][3],x,y;
	clrscr();
	printf("\n Enter matrix ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" ");
	for(k=0;k<9;k++)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				b[k]=a[i][j];
				k++;
			}
		}

	}
	printf("\n Sorting in 1 D  : ");
	for(k=0;k<9;k++)
	{
		printf("%d",b[k]);
	}
	printf("\n prime are : ");

	for(k=0;k<9;k++)
	{
		count=0;
		for(m=1;m<=b[k];m++)
		{
			if(b[k]%m==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf(" %d ",b[k]);
		}

	}
	printf("\n Sorting in 2 D \n ");
	for(y=0;y<3;y++)
	{
		for(x=0;x<3;x++)
		{
			for(k=0;k<9;k++)
			{
				d[x][y]=b[k];
				y++;
			}
			x++;
		}
	}
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{

			printf("%d ",d[x][y]);
		}
		printf("\n");
	}
	getch();
}