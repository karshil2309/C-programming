/*
		Author:- KARSHIL SHETH
		Objective:-PALINDROME NUMBER 
		Date:-	12-02-2018
*/
void main()
{
	int i,j,temp=0,revNo=0,dup;
	clrscr();
	printf("\n Palindrome number : \n\n");
	i=1;
	while(i<=1000)
	{
		temp=0,revNo=0;
		j=i;
		dup=i;
		while(j>0)
		{
			temp=j%10;
			revNo=(revNo*10)+temp;
			j=j/10;
		}
		if(dup==revNo)
		{
			printf("%d ",revNo);
		}
		i++;
	}
	getch();
}