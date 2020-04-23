//Calculate the cumulative product of a list of n numbers. 
#include<stdio.h>
void clrscr()                         
{
 system("clear");
}

void main()
 {
  float temp,prd=1.00; 
  char ch='y';                           
  clrscr();
  do
   {
    printf("Enter a number   ");
    scanf("%d",&temp);
    prd=prd*temp;
    printf("Do you want to enter next number(Y/N)");
    scanf("%c",&ch); 
   }while((ch=='y') || (ch =='Y'));
  printf("\nCommutative Product is  :%d",prd);
 }
