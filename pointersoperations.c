/*
	Author:- KARSHIL SHETH
	Objective:-To perform arithmetic operators. 
	Date:-	12-02-2018
*/
/*
	Arithmetic operator of pointers
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[5];
	int *ptr;
	int i;
	clrscr();
   //	cout<<"enter the size of array:"<<n;
	for(i=0;i<5;i++)
	{
		cout<<endl<<"enter the array values";
		cin>>arr[i];
	}
	cout<<endl<<"The content of array is:"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	ptr=arr;
	cout<<endl<<"address of"<<&ptr<<"value of ptr:"<<*ptr;
	ptr++;
	cout<<endl<<"value of ptr:"<<*ptr;
	ptr+=2;
	cout<<endl<<"value of+2 ptr:"<<*ptr;
	ptr-=3;
	cout<<endl<<"value of-3 ptr:"<<*ptr;
	getch();


}