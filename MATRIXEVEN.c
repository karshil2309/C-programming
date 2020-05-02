/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-MATRIX EVEN ODD 
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,a[3][3],k,count=0;
	clrscr();
	printf("\n Enter matrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}

	}
	printf("\n Even from matrix are : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2==0)
			{
				printf("  %d",a[i][j]);
			}


		}
	}
	printf(" \n  odd from matrix are : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2==1)
			{
				printf("  %d",a[i][j]);
			}
		}
	}
/*	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				if(a[i][j]%k==0)
				{
					count++;
				}
			}
			if(count==2)
			{
				printf("%d",a[i][j]);
			}
		}

	}    */
	getch();

}