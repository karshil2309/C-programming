/*
		Author:- KARSHIL SHETH
		Objective:-TO CHECK THE NUMBER IS PRIME OR COMPOSITE. 
		Date:-	12-02-2018
*/
void main()
{
	int i,n,count=0;
	clrscr();
	printf("\n Enter any number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("\n Factors are :%d %d",n,i);
			count++;
		}
	}


	if(count==2)
	{
		printf("\n Number is PRIME ");
	}
	else
	{
		printf("\n Number is Composite");
	}

	getch();
}