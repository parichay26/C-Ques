//C program to calculate profit or loss
#include<stdio.h>
void clrscr()                         
{
 system("clear");
}


void main()
{
 int n,m;                             
 clrscr();                            
 printf("ENTER COST PRICE  :");
 scanf("%d",&n);
 printf("ENTER SELLING PRICE  :");
 scanf("%d",&m);
 if (m>n)                             
  {
   printf("profit\n");
  }
 else if (n>m)
  {
   printf("loss\n");
  }
 else
  {
   printf("no profit no loss\n");
  }
}
