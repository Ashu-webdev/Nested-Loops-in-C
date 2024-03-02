/* To display all armstrong nos within a given range */
#include<stdio.h>
int main()
{
  int min,max,n,r,sum,armstrong,i;
  printf("Enter min & max:");
  scanf("%d%d",&min,&max);
  for(i=min;i<=max;i++)
  {
       	  n=i;
	  armstrong=n;
	  sum=0;
	  while(n!=0)
          {
             r=n%10;
             sum=sum+(r*r*r);
             n=n/10;
          }
          if (sum==armstrong)
 	     printf("%d\n",sum);
  }
}  
		

