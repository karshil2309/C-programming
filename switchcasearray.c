/*
				Author:- KARSHIL SHETH
				Objective:-TO PERFORM GIVEN OPERATIONS OF AN ARRAY USING SWITCH CASE 	
				Date:- 11-02-2018
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int no,a[5],i,j,choice,sum=0,avg=0,count=0;
	clrscr();
	label:
	printf("\n1. scanf");
	printf("\n2. printf");
	printf("\n3. sum");
	printf("\n4. avg");
	printf("\n5.odd");
	printf("\n6. prime number");
	printf("\nenter the no");
	scanf("%d",&choice);

       switch(choice)
       {
		case 0:
			exit(0);


		case 1:
		for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
		break;
		case 2:
		for(i=0;i<5;i++)
		{
			printf("%d",a[i]);
		}
		break;
		case 3:
		for (i=0;i<5;i++)
		{
			sum=sum+a[i];
		}
			printf("sum is %d",sum);
		break;

		case 4:
		avg=0;
		for(i=0;i<5;i++)
		{
			sum=sum+a[i];
			avg=sum/5;
		}
			printf("avg is %d",avg);
		break;
		case 5:
		for(i=1;i<5;i++)
		{
			if(a[i]%2==0)
			{

				printf("%d",a[i]);
			}
		}
		break;
		case 6:
		 for(a[i]=0;a[i]<=i;i++)
		 {
		for(j=2;j<=a[i];j++)
		{
		       if(a[i]%j==0)
		       {
				count++;
		       }
		}

		if(count==2)
		{
			printf(" prime are %d",a[i]);
		}
		}
	}
	goto label;

   getch();
}