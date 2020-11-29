/*


Write a program to find the sum of following series 1-X1/1!+X2/2!-......…………Xn/n!. 


*/

#include<stdio.h>







int power(int x ,int k)
{
    int prod=1;
    for(int i=1;i<=k;i++)
    {
     prod=prod*(-x);
     }
     return prod;
}       
            
 int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}               
            

int main()
{

int n,x;
float sum=1;

//printf("\n enter the value of n and x");
//scanf("%d%d",&n,&x);
n=10,x=2;
for(int i=1;i<n;i++)
{
sum=sum+ (1.0*power(x,i))/fact(i);
printf("\n the sum of series for %d terms is equal to %f",i,sum);
}

//printf("the sum of series for %d is equal to %d",n,sum);


getchar();
getchar();
return 0;
    
}           
