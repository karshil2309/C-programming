/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-DETERMINANT OF 3X3 MATRIX. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,k,a[3][3],d=0;
	clrscr();
	printf("\n Enter martix of 9 elements  : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n your matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	// determinant is

	d=(a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2])))-(a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2])))+(a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1])));		if(d<0)
		{
			d=-d;
		}
	printf("\n Determinant of the matrix is :");
	{
		printf("\n %d",d);
	}
	getch();
}