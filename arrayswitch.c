/*
	Author:- KARSHIL SHETH
	OBJECTIVE:-PRACRICE OF SWITCH CASE USING ARRAY. 
	DATE:- 13-02-2018
*/
void main()
{
	int a[5],x,i,j,sum=0,count=0,TotalSum=0;
	float avg=0;
	clrscr();
	 label:

	printf("\n Enter your choices ");
	printf("\n\n 1) Scan the array ");
	printf("\n 2) Print the array ");
	printf("\n 3) Sum the array ");
	printf("\n 4) Avg the array ");
	printf("\n 5) odd from the array ");
	printf("\n 6) even from the array ");
	printf("\n 7) prime from the array ");
	printf("\n 0) exit \n");
	scanf("%d",&x);
	switch(x)
	{
		case 0: exit(0);


		case 1://scanf
			printf("\n Array size = 5");
			for(i=0;i<5;i++)
			{
				scanf("%d",&a[i]);
			}
			break;

		case 2://printf
			for(i=0;i<5;i++)
			{
				printf(" %d " ,a[i]);
			}
			break;

		case 3: // sum
			sum=0;
			for(i=0;i<=5;i++)
			{
				sum=sum+a[i];
			}
			printf("\n sum is %d",sum);
			break;

		case 4: //avg
			sum=0;
			for(i=0;i<=5;i++)
			{
				sum=sum+a[i];
				avg=sum/5;
			}
			printf(" \n= %f",avg);
			break;

		case 5: //odd
			for(i=0;i<=5;i++)
			{
				if(a[i]%2==1)
				{
					printf(" %d ",a[i]);
				}
			}
			break;

		case 6://even
			for(i=1;i<=5;i++)
			{
				if(a[i]%2==0)
				{
					printf(" %d ",a[i]);
				}
			}
			break;

		case 7://prime
		for(i=0;i<5;i++)
		{
			count=0;
			for(j=1;j<=a[i];j++)
			{
				if(a[i]%j==0)
				{
					count++;
				}
			}
			if(count==2)
			{
				printf(" %d ",a[i]);
			}

		}
			break;

		default: printf("\n You have enter Wrong choice.please enter right choice");
	}
	getch();
	goto label;
}