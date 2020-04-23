//C program to count total number of notes in given amount.
#include<stdio.h>
void main()
 {
  int n,a,b,c,d,e,f,g,h,i;         
  int x=2000;
  printf("Enter an amount  :");
  scanf("%d",&n);
  a=n/x;
  n=n%x;
  x=500;
  b=n/x;
  n=n%x;
  x=100;
  c=n/x;
  n=n%x;
  x=50;
  d=n/x;
  n=n%x;
  x=20;
  e=n/x;
  n=n%x;
  x=10;
  f=n/x;
  n=n%x;
  x=5;
  g=n/x;
  n=n%x;
  x=2;
  h=n/x;
  n=n%x;
  x=1;
  i=n/x;
  printf("\n2000 rupees notes are  :%ld",a);
  printf("\n 500 rupees notes are  :%ld",b);
  printf("\n 100 rupees notes are  :%ld",c);
  printf("\n  50 rupees notes are  :%ld",d);
  printf("\n  20 rupees notes are  :%ld",e);
  printf("\n  10 rupees notes are  :%ld",f);
  printf("\n   5 rupees coin  are  :%d",g);
  printf("\n   2 rupees coin  are  :%d",h);
  printf("\n   1 rupee  coin  are  :%d\n",i); 
}

