
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n1,n2,count=0;
	clrscr();
	for(j=1;j<=5;j++)
	{
	printf("\nenter the number:");
	scanf("%d",&n1);

	 count=0;
	for(i=1;i<=n1;i++)
	{
	   if(n1%i==0)
	   {
		count++;
	   }
	}
	   if(n1%2!=0)
	   {
		printf("is an odd nunmber");
	   }


	     if(count==2)
		 {
			printf("\nprime number %d",n1);
		 }



       }
 getch();
}

