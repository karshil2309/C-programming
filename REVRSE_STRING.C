/*
		Author:- KARSHIL SHETH
		Objective:-TO REVERSE THE STRING. 
		Date:-	12-02-2018
*/
void main()
{
	char a[20];
	int i,j,len;
	clrscr();
	printf("\nEnter the string to reverse:");
	fflush(a);
	scanf("%[^\n]",&a);
	i=0;
	j=strlen(a)-1;
	while(i<j)
	{
	  len=a[i];
	  a[i]=a[j];
	  a[j]=len;
	  i++;
	  j--;
	}
	printf("\nThe reverse string is %s",a);
	getch();
}