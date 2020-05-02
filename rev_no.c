/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-TO PRINT THE <1000 NUMBERS REVERSE. 
	DATE:- 13-02-2018
*/
void main()
{

	int i,n,temp=0,revNo=0,dup;
	clrscr();
	i=1;
	while(i<=1000)
	{
		temp=0;revNo=0;
		n=i;
		dup=i;
		while(n>0)
		{
			temp=n%10;
			revNo=(revNo*10)+temp;
			n=n/10;
		}
		if(dup==revNo)
		{
			printf(" %d ",revNo);
		}
		i++;
	}
	getch();
}