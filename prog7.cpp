
/*Write a program to construct a Fibonacci series upto n terms. 


In Fibonaaci series nth term tn is given by

nth term= sum of n-1th term and n-2th term

0 1 1 2 3 5 8 13 21 and so on

*/


#include<stdio.h>

int main()
{
    int n,p=0,q=1,i=1,s;
    printf("\n enter the value of n");
    scanf("%d",&n);
    
    if(n==1)
    printf("\n %d",p);
    else if (n==2)
    {
         printf("%d  %d",p,q);
      }
      else
      {
          for(i=1;i<=n;i++)
          {
            s=p+q;
            p=q;
            q=s;
            printf("%d\n",s);
          }               
        
       }
       
       
       getchar();
       getchar();
       return 0;
       
       }
       
    
    
