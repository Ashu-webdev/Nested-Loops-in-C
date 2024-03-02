/* To display all prime numbers within a given range*/
#include<stdio.h>
int main()
{
   int l,u,num,i,j,count;
   printf("Enter value of u,l:");
   scanf("%d%d",&l,&u);
   for (i=l;i<=u;i++)
   {
      num=i;
      count=0;
      for (j=1;j<=num;j++)
      {
         if (num%j==0)
            count++;
      }
      if (count==2)
     	  printf("%d\t",num);
     
   } 
}   

