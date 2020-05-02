/*
		Author:- KARSHIL SHETH
		Objective:-SORTING OF 3 DIMENSIONAL MATRIX. 
		Date:-	12-02-2018
*/
void main()
{
 int a[3][3],i,j,l,k,tmp;
 clrscr();
 for(i=0;i<3;i++)
 {
	for(j=0;j<3;j++)
	{      printf("\nenter the elements");
		scanf("%d",&a[i][j]);

	}

 }

 for(i=0;i<3;i++)
 {
	for(j=0;j<3;j++)
	{
		printf(" %d ",a[i][j]);
	}
	printf("\n");
 }

 for(i=0;i<3;i++,l=0)
 {
	for(j=0;j<3;j++)
	{

	    for(k=(j+1);k<3;k++)
	    {


		if(a[i][j]>a[i][k])
		{
		 tmp=a[i][j];
		 a[i][j]=a[i][k];
		 a[i][k]=tmp;
		}

	   }

	}


 }
 printf("\n sorted matrix is :\n");
 for(i=0;i<3;i++)
 {
	for(j=0;j<3;j++)
	{
		printf(" %d ",a[i][j]);
	}
	printf("\n");
 }
getch();


}