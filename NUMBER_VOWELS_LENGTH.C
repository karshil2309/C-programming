/*
		Author:- KARSHIL SHETH
		Objective:-TO FIND NUMBER OF VOWELS AND THE NO OF STRINGS ETC. 
		Date:-	12-02-2018
*/
void main()
{
	char c[20];
	int i,len=0,vowels=0,space=0,word=1;
	clrscr();
	fflush(c);
	printf("\n enter name:");
	gets(c);
	for(i=0;c[i]!='\0';i++)
	{
		len++;
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
		{
			vowels++;
		}
		if(c[i]== ' ')
		{
			space++;
		}
		if(c[i]==' ')
		{
			word++;
		}

	}
	printf("\nlength of string is %d",len);
	printf("\n the vowels are %d",vowels);
	printf("\n the space in string is %d",space);
	printf("\n the no of words are %d",word);

getch();
}