/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int i,k,j,l,count=1;
 
  for(i=1;i<=4;i++)
  {
      if(i>=2)
      {
          count=2;
      }
      if(i==4)
      {
          count=4;
      }
     
      for(j=1;j<=count;j++)
      {
      for(k=1;k<=2;k++)
      {
          printf("*");
      }
      printf("\n");
      }
      if(i==4)
      {
          break;
      }
      for(l=1;l<=5;l++)
      {
          printf("*");
      }
      printf("\n");
  }
  
  

    return 0;
}
