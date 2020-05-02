/*
				Author:- KARSHIL SHETH
				Objective:-TO CHECK WHETHER THE NUMBER IS MAGIC NUMBER OR NOT.	
				Date:- 11-02-2018
*/
void main()
{
	int no,sum=0,temp,rev=0,product;
	clrscr();
	printf("\nEnter the number");
	scanf("%d",&no);

	for(;no!=0;no/=10)
	{
		temp=no%10;
		sum=sum+temp;
	}
	printf("%d",sum);

	for(;sum!=0;sum/=10)
	{
		temp=sum%10;
		rev=(rev*10)+temp;
	}
		printf("%d",rev);
	product=sum*rev;
	printf("%d",product);

  getch();
}

