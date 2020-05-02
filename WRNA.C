/*
				Author:- KARSHIL SHETH
				Objective:- TO CREATE WITH RETURN TYPE AND NO ARGUMENT FUNCTION.	
				Date:- 11-02-2018
*/
#include<stdio.h>
#include<conio.h>
int addFun();
void main()
{

	int ans;
	clrscr();
	ans = addFun();
	printf("\n addition is %d",ans);

	ans=ans+10;
	printf("\n Addition +10 =%d",ans);
	getch();

}
int addFun(void)
{

	int no1,no2,ans;

	printf("\nEnter  No1:");
	scanf("%d",&no1);
	printf("\nEnter No2 ");
	scanf("%d",&no2);
	ans=no1+no2;

       return ans;

}

