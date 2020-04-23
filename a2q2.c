//to display the consecutive digits 0, 1, 2, . . . ,9, with one digit on each line(while, do-while, for loop)
#include<stdio.h>
void clrscr()
 {
  system("clear");         
 }
void main()
 {
  int i=0;                
  clrscr();               
 while (i<10)             
   {
    printf("%d\n",i); 
    i++;
   }
 printf("\n\nWITH DO WHILE\n");  
 i=0;
  do                    
   {
    printf("%d\n",i);
    i++;
   }while(i<10);
 }
 
