//DIsplay the greater number from two entred numbers
#include<stdio.h>
void clrscr()
{
 system("clear");
}

void main()
{
 int a,b;                                          
 clrscr();
 printf("\nEnter 2 different number  :");
 scanf("%d %d",&a,&b);                            
 if(a<b)                                         
  {
   printf("\nGreater number is :%d",b);
  }
 else
  {
   printf("\nGreater number is :%d",a);
  }
}
