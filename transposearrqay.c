/*
				Author:- KARSHIL SHETH
				Objective:-TO PERFORM THE TRANSPOSE OF A MATRIX.	
				Date:- 11-02-2018
*/
void main()
{
	int r=0,c=0,a[10][10],i,j;
	clrscr();
	printf("\n Enter num. of rows for your matrix : \n");
	scanf("%d",&r);
	printf("\n Enter num. of cloumns for your matrix : \n");
	scanf("%d",&c);
	printf("\n Enter %d rows and %d columns for matrix i.e %d elements : \n ",r,c,r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n Your matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Transpose of the above matrix is : \n");
	for(j=0;j<c;j++)
	{
		for(i=0;i<r;i++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	getch();
}