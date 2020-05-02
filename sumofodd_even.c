/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-SUM OF ODD EVEN. 
	DATE:- 13-02-2018
*/
void main()
{
	int i,j,fac,no,count=0,sum=0,x;
	clrscr();
	for(i=1;i<=1000;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				fac=j;
				no=i;
				printf(" \n %d : %d ",no,fac);
			       //	if(fac%no==0)
			       //	{
				//	count++;
			      //	}
		    //	}
		   //	if(count==2)
		     //	{
		       //		printf("%d %d ",fac,no);
			}
		}
	}
	for(i=1;i<=1000;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf(" %d ",j);
		}
	}
/*	for(i=1;i<=1000;i++)
	{
		sum=0;
		for(x=2;x<=i;x++)
		{
			sum=sum+x;
			printf("%d ",sum);
		}
	}                */
	getch();
}