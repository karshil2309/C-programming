/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-SCAN PRIME ELEMENTS FROM ARRAY. 
	DATE:- 13-02-2018
*/
void main()
{
	int a[5],b[5],i,j,count=0;

	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter the value of a : ");
		scanf("%d",&a[i]);
	}
	printf("\n\n Prime from the elements : ");
	for(i=0;i<5;i++)
	{
		count=0;
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d ",a[i]);
		}
	}
getch();
}