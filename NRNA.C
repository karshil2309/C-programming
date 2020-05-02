/*
		DOC:- Karshil sheth
		Date:- 29 July,2017
		Programme - Function

function
-------------------------
prototype or signature
argument or parameter

*/

void addFun();
void main()
{

	clrscr();
	addFun();
	getch();

}
void addFun()
{
	int no1,no2,ans;

	printf("\nEnter  No1:");
	scanf("%d",&no1);
	printf("\nEnter No2 ");
	scanf("%d",&no2);


	ans=no1+no2;
	printf("\n Addition : %d",ans);
}