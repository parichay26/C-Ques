/*
C program to examine temprature 
ICE       ,if temp is less than 0
WATER     ,if temp lie between 0 to 100
STEAM     ,if temp exceeds 100
*/ 
#include<stdio.h>
void clrscr()                         
{
 system("clear");
}


void main()
 {
  float temp;                            
  clrscr();                              
  printf("ENTER A TEMPRATURE POINT   :");
  scanf("%f",&temp);
  if(temp<0)
   {
    printf("ICE\n");
   }
  else if(temp>0 && temp<100)
   {
    printf("WATER\n");
   }
  else
   {
    printf("steam\n");
   }
 }
