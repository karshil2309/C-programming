/*
				Author:- KARSHIL SHETH
				Objective:-TO CHECK WHETHER THE NUMBER IS ARMSTRONG OR NOT.	
				Date:- 11-02-2018
*/
void main()
{
	int i,sum=0,dup;
	clrscr();
	printf("\n Enter any number : ");
	scanf("%d",&n);
	dup=n;
	for(;n>0;n=n/10)
	{
		i=n%10;
		sum=sum+(i*i*i);
	}
	if(sum==dup)
	{
		printf("\n Armstromg");
	}
	else
	{
		printf("\n Not Armstrong");
	}
	getch();
}