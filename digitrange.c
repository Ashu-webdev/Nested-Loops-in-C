/* To print all those numbers within a given range which is divisible by sum of their individual digits*/
#include<stdio.h>
int main()
{
   int min,max,num,num1,rem,sum,i;
   printf("Enter the value of min & max:");
   scanf("%d%d",&min,&max);
   for (i=min;i<=max;i++)
   {
     sum=0;
     num1=i;
     num=i;
     while (num!=0)
     {    
	  rem=num%10;
          sum=sum+rem;
	  num=num/10;
     }	  
     if  (num1%sum==0)
      	  	 printf("%d\t",num1);
			 
      	  
     
    }   
}              
