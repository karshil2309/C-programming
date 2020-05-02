/*
				Author:- KARSHIL SHETH
				Objective:-ADDITION OF A 3X3 MATRIX.	
				Date:- 11-02-2018
*/
void main()
{
	int a[3][3],i,j,b[3][3],c[3][3],d=0,k,l;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}

       }
       printf("\n the matrix a is :\n");
       for(i=0;i<3;i++)
       {
		for(j=0;j<3;j++)
		{
			printf(" %d ",a[i][j]);

		}
		printf("\n");
       }
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n  the matrix b is :\n");
       for(i=0;i<3;i++)
       {
		for(j=0;j<3;j++)
		{
			printf(" %d ",b[i][j]);
		}
		printf("\n");
       }
	printf("\n sum is c :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			d=c[i][j];
		       //	k=a[i][j];
		       //	l=b[i][j];
		       printf(" %d ",d);
		      /* printf(" %d " ,k);
		       printf(" + ");
		       printf(" %d ", l);
		       printf(" = ");
		       printf(" %d ",d);  */

		}
		printf("\n");
       }
	       //     printf(" %d %d %d",a[i][j],b[i][j],d);



       for(i=0;i<3;i++)
       {


		for(j=0;j<3;j++)
		{
			printf(" \t%d ",a[i][j]);

		}
		 if(i==1)
		 {
			printf( " +");
		 }


		for(k=0;k<3;k++)
		{
			printf(" \t%d ",b[i][k]);

		}
		if(i==1)
		{
			printf(" =");
		}
		for(l=0;l<3;l++)
		{
		       printf("  \t%d   ",c[i][l]);

		}
			 printf("\n");



       }





       getch();
}