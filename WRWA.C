/*
		Author:-	KARSHIL SHETH
		Objective:-	TO CREATE WITH RETURTN TYPE AND WITH ARGUMENT FUNCTION
		Date:-		11-02-2018
*/
#include<stdio.h>
#include<conio.h>

int addFun(int no1,int no2);
void main()
{
	int no1,no2,ans;
	clrscr();


	printf("\nEnter  No1:");
	scanf("%d",&no1);
	printf("\nEnter No2 ");
	scanf("%d",&no2);


	ans = addFun(no1,no2);

	printf("\nAddition is %d",ans);

	ans=ans+10;

	printf("\naddition + 10 is %d",ans);

	getch();


}
int addFun(int no1,int no2)
{
	int ans;

	ans=no1+no2;

	return ans;

}