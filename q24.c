/*
C program to print message accourding to input as
RED   for r and R
BLUE  for b and B
GREEN for g and G
BLACK if any other
*/
#include<stdio.h>
void clrscr()                        
{
 system("clear");
}


void main()
 {
  char colour;                         
  clrscr();                            
  printf("ENTER A CHARACTER   :");
  scanf("%c",&colour);
  switch(colour)
   {
    case 'r' :printf("RED\n");
               break;
    case 'R' :printf("RED\n");
               break;
    case 'g' :printf("GREEN\n");
               break;
    case 'G' :printf("GREEN\n");
               break;
    case 'b' :printf("BLUE\n");
               break;
    case 'B' :printf("BLUE\n");
               break;
    default  :printf("BLACK\n");
   }
 }
