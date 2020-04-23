#include<stdio.h>
void clrscr()                         
{
 system("clear");
}

void main()                           
{
 int n,a=0,b,c;                      
 clrscr();                            
 printf("ENTER A NUMBER  :");
 scanf("%d",&n);
 c=n;
 while(n>0)
  {
   a=n%10;
   b=b+a;
   if(n<=10)
    {
     break;
    }
   b=b*10;
   n=n/10;
  }
 printf("\nreverse number is :%d",b); 
}
