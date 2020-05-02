/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-FACTORIAL OF NUMBER USING FOR LOOP. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,n,f=1;
	clrscr();
	printf("\n Enter any number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
		printf("\n%d ",f);
	}
	printf("\n Factorial of num =%d",f);
	getch();
}
