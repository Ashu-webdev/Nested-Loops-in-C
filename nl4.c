/* To display all prime numbers within a given range*/
#include<stdio.h>
int main()
{
   int i,j;
   for (i=1;i<=5;i++)
   {
      for (j=4;j>=i;j--)
         printf(" ");
      for (j=1;j<=i;j++)
         printf("%d",j);
      for (j=i-1;j>=1;j--)
	 printf("%d",j);
      printf("\n");
   }
}   
