/*
				Author:- KARSHIL SHETH
				Objective:-SORTING OF ONE DIMENSIONAL ARRAY.	
				Date:- 11-02-2018
*/
#define size 5
void main()
{
	int a[size],i,j,temp=0,Flag=1;
	clrscr();
	printf("\n Enter elements in array ");
	for(i=0;i<size;i++)
	{
		printf("\n\n Enter the value of a : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<size && Flag==1;i++)
	{

		for(j=0;j<size-1;j++)
		{
			Flag=0;
			if(a[j]>a[j+1])
			{
				Flag=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		for(j=0;j<size;j++)
		{
			printf("%d ", a[j]);
		}
		printf("  ");
	}
	for(j=0;j<size;j++)
	{
		printf(" \n %d",a[j]);

	}
	getch();
}
