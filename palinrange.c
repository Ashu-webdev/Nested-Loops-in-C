/* To display all palindrome nos within a given range */
#include<stdio.h>
int main()
{
  int min,max,i,n,r,rev,pal;
  printf("Enter min and max:");
  scanf("%d%d",&min,&max);
  for (i=min;i<=max;i++)
  { 
    n=i;
    pal=n;
    rev=0;
    while (n!=0)
    {
      r=n%10;
      rev=(rev*10)+r;
      n=n/10;
    }
    if (pal==rev)
	printf("%d\n",i);
  }  
}
		

