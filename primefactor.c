/*
				Author:- KARSHIL SHETH
				Objective:-To check whether the number is prime factor or not.	
				Date:- 11-02-2018
*/
#include<stdio.h>
#include<conio.h>
int main(){
  int num,i=1,j,k;
  printf("\nEnter a number:");
  scanf("%d",&num);
  while(i<=num){
      k=0;
      if(num%i==0){
         j=1;
          while(j<=i){
            if(i%j==0)
                 k++;
             j++;
          }
          if(k==2)
             printf("\n%d is a prime factor",i);
      }
      i++;
   }
   return 0;
}

