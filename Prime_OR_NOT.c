/*
	Author:- KARSHIL SHETH
	oBJECTIVE:-NUMBER IS PRIME OR NOT 
	DATE:- 13-02-2018
*/
void main()
{
	int i,n,j,count=0;
	clrscr();
	for(j=1;j<=5;j++)
	{
		printf("\n Enter any number : ");
		scanf("%d",&n);
		count=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("\n number is prime ");
		}
		else
		{
			printf("\n number is not prime.");
		}
		if(n%2==1)
		{
			printf(" is prime and also odd number");
		}
	}
	getch();

}

