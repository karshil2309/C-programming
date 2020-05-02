/*
				Author:- KARSHIL SHETH
				Objective:-TO SEARCH PRIME NUMBERS FROM THE ARRAY.	
				Date:- 11-02-2018
*/
void main()
{
	int a[5],b[5],i,j,count=0,primeLength=0,primeArray[10];
	int sum=0;
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
			primeLength++;
			sum=(sum*10)+a[i];
		}
	}
	printf("\n \nPrimeLength = %d ",primeLength);
	printf("\n\n Sum is : %d \n",sum);

	i=0;
	while(sum>0)
	{
		a[i]=sum%10;
		sum=sum/10;
		printf(" a[%d] = %d ",i,a[i]);
		printf("\n");
		i++;
	}
	getch();
}