/*
	Author:- KARSHIL SHETH
	OBJECTIVE:- TO CALUCLATE TOTAL PALINDROME.
	DATE:- 13-02-2018
*/
void main()
{
	int i,temp=0,revNo=0,n,dup,count=0;
	clrscr();
	i=1;
	while(i<=1000)
	{
		temp=0,revNo=0;
		n=i;
		dup=i;
		while(n>0)
		{
			  temp=n%10;
			  revNo=(revNo*10)+temp;
			  n=n/10;
		}
		if(revNo==dup)
		{
			count++;
			printf("%d ",revNo);
		}
		i++;
	}
	printf("\nTotal Palindrome : %d",count);

	getch();
}