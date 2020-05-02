/*
				Author:- KARSHIL SHETH
				Objective:-TO FIND THE FACTORIAL OF A NUMBER.	
				Date:- 11-02-2018
*/
void factorialFun();
void main()
{
	clrscr();
	factorialFun();
	getch();

}
void factorialFun()
{
	int i,j,fact,no;

	printf("\nEnter the number to find factorial:");
	scanf("%d",&no);
	fact=1;
	for(i=1;i<=no;i++)
	{
	   fact=fact*i;

	}
	printf("\n the factorial of no is : %d",fact);

}