/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-PALINDROME 1 TO 50 .
	DATE:- 13-02-2018
*/
void main()
{
	int i,n,revNo=0,temp=0,dup,count=0;
	clrscr();
	i=1;
	do{

		temp=0;revNo=0;
		dup=i;
		n=i;
		do{
			temp=n%10;
			revNo=(revNo*10)+temp;
			n=n/10;
		}while(n>0);
		if(revNo==dup)
		{
			count++;
			printf("\n %d",revNo);
		}
		i++;
	}while(i<=50);
	printf("\n Total Palindrome num =%d",count);
	getch();
}