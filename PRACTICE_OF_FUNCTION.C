/*
				Author:- KARSHIL SHETH
				Objective:-PRACTICE OF FUNCTION USING SWITCH CASE.	
				Date:- 11-02-2018
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void primeFun();
void armFun();
void palFun();
void addFun();
 main()
{
   int choice,c1;
	
   printf("\n choice1 is NRNA1");
   printf("\nchoices2 is NRNA2");
   printf("\n3 is NRNA3");
   printf("\n choices4 is NRNA4");
   printf("\nEnter the choices");
   scanf("%d",&choice);
   switch(choice)
   {
   		
	 case 1:
		 
		 primeFun();
		 getch();
	break;

	case 2:
		
		armFun();
		getch();
	break;

	case 3 :
		
		palFun();
		getch();
	break;

	case 4:
		addFun();
		getch();
	break;
   }

}

void primeFun()
{
	int i,j,count;
	for(i=1;i<=1000;i++)
	{       count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
			       count++;
			}
		}
		if(count==2)
		{
		 printf("\t %d " ,i);
		}
	}


}
void armFun()
{
	int i,j,sum=0;
	for(i=1;i<=1000;i++)
	{       sum=0;
		for(j=i;j>0;j=j/10)
		{
			sum=sum+((j%10)*(j%10)*(j%10));
		}
		if(sum==i)
		{
			printf("\t %d",i);
		}
	}

}
void palFun()
{
	int i,reverse_i=0,rem,temp;
	
	for(i=1;i<=1000;i++){
      temp=i;
      reverse_i=0;
      while(temp){
         rem=temp%10;
         temp=temp/10;
         reverse_i=reverse_i*10+rem;
      }
      if(i==reverse_i)
         printf("%d ",i);
   }



}
void addFun()
{
	int i,j,temp,sum;
	
	for(i=1;i<=1000;i++)
	{	
		
		sum=0;
		
		for(j=i;j!=0;j=j/10)
		{
			
				temp=j%10;
				sum=sum+temp;
		}	
		if(sum>8)
		{
				printf("\t%d",i);
		}
		
	}
}
