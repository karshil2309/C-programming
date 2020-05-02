/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-CALCULATOR WITH 4 FUNCTIONS. 
	DATE:- 13-02-2018
*/
void calNrna();
void calNrwa(int n1,int n2);
int calWrna();
int calWrwa(int n1,int n2);
void main()
{       int options,n1,n2,ans;
	clrscr();
	printf("******************************************************************\n");
	printf("\n\t\t\tCalculator using functions\n");
	printf("\n******************************************************************\n");

	printf("\nSelect the options given below : ");
	printf("\n1 calc with Nrna:");
	printf("\n2 calc with Nrwa:");
	printf("\n3 calc with Wrna:");
	printf("\n4 calc with Wrwa:");
	printf("\n enter the options : ");
	scanf("%d",&options);
	switch(options)
	{
		case 1:
			clrscr();
			calNrna();
			getch();
			break;
		case 2:

			clrscr();
			printf("\nEnter the number:");
			scanf("%d",&n1);
			printf("\nEnter the number:");
			scanf("%d",&n2);
			calNrwa(n1,n2);
			getch();
			break;
		case 3:
			ans=calWrna();
			printf("\nANs of u r choice is %d",ans);
			getch();
			break;
	       case 4:
			clrscr();
			printf("\nEnter the number:");
			scanf("%d",&n1);
			printf("\nEnter the number:");
			scanf("%d",&n2);
			ans=calWrwa(n1,n2);
			printf("\nANs of u r choice is %d",ans);

			getch();
			break;



       }

}
void calNrna()
{
	int no1,no2,choice,ans;


	printf("\nEnter the number:");
	scanf("%d",&no1);
	printf("\nEnter the number:");
	scanf("%d",&no2);
	printf("\n1.addition");
	printf("\n2.subtraction");
	printf("\n3.multiplication");
	printf("\n4.division");
	printf("\nEnter the choice :");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			ans=no1+no2;
			printf("\nthe addition is %d",ans);
			break;
		case 2:
			if(no1>no2)
			{
				ans=no1-no2;
				printf("\ntsubtraction is %d",ans);
			}
			else
			{
				ans=no2-no1;
				printf("\nsubtraction is %d",ans);
			}
			break;
		case 3:

			ans=no1*no2;
			printf("\nmultiplication is%d",ans);
			break;

		case 4:
			if(no1>no2)
			{
				ans=no1/no2;
				printf("\ndivision is %d",ans);
			}
			else
			{
				ans=no2/no1;
				printf("\ndivision is %d",ans);
			}

	}

}
void calNrwa(int n1,int n2)
{
	int ans,choice2;

	printf("\n1.addition");
	printf("\n2.subtraction");
	printf("\n3.multiplication");
	printf("\n4.division");
	printf("\nEnter the choice :");
	scanf("%d",&choice2);
	switch(choice2)
	{
		case 1:
			ans=n1+n2;
			printf("\nthe addition is %d",ans);
			break;
		case 2:
			if(n1>n2)
			{
				ans=n1-n2;
				printf("\ntsubtraction is %d",ans);
			}
			else
			{
				ans=n2-n1;
				printf("\nsubtraction is %d",ans);
			}
			break;
		case 3:

			ans=n1*n2;
			printf("\nmultiplication is%d",ans);
			break;

		case 4:
			if(n1>n2)
			{
				ans=n1/n2;
				printf("\ndivision is %d",ans);
			}
			else
			{
				ans=n2/n1;
				printf("\ndivision is %d",ans);
			}

	}

}

int calWrna()
{
	int ans,choice3,n1,n2;

	printf("\nEnter the number:");
	scanf("%d",&n1);
	printf("\nEnter the number:");
	scanf("%d",&n2);
	printf("\n1.addition");
	printf("\n2.subtraction");
	printf("\n3.multiplication");
	printf("\n4.division");
	printf("\nEnter the choice :");
	scanf("%d",&choice3);

	switch(choice3)
	{
		case 1:
			ans=n1+n2;
			//printf("\nthe addition is %d",ans);

			break;
		case 2:
			if(n1>n2)
			{
				ans=n1-n2;
			  //	printf("\ntsubtraction is %d",ans);
			}
			else
			{
				ans=n2-n1;
			    //	printf("\nsubtraction is %d",ans);
			}
			break;
		case 3:

			ans=n1*n2;
		      //	printf("\nmultiplication is%d",ans);
			break;

		case 4:
			if(n1>n2)
			{
				ans=n1/n2;
			//	printf("\ndivision is %d",ans);
			}
			else
			{
				ans=n2/n1;
			  //	printf("\ndivision is %d",ans);
			}

	}


	   return ans;

}
int calWrwa(int n1,int n2)
{
	int ans,choice4;

	printf("\n1.addition");
	printf("\n2.subtraction");
	printf("\n3.multiplication");
	printf("\n4.division");
	printf("\nEnter the choice :");
	scanf("%d",&choice4);

	switch(choice4)
	{
		case 1:
			ans=n1+n2;
			//printf("\nthe addition is %d",ans);

			break;
		case 2:
			if(n1>n2)
			{
				ans=n1-n2;
			  //	printf("\ntsubtraction is %d",ans);
			}
			else
			{
				ans=n2-n1;
			    //	printf("\nsubtraction is %d",ans);
			}
			break;
		case 3:

			ans=n1*n2;
		      //	printf("\nmultiplication is%d",ans);
			break;

		case 4:
			if(n1>n2)
			{
				ans=n1/n2;
			//	printf("\ndivision is %d",ans);
			}
			else
			{
				ans=n2/n1;
			  //	printf("\ndivision is %d",ans);
			}

	}


	   return ans;


}