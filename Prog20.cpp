/*



Write a program to find the factorial of given number using recursion.
*/


#include<stdio.h>

int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}  



int main()
{
int n;
printf("\n enter an integer value");
scanf("%d",&n);
int res=fact(n);

printf("\n the factorial of %d is equal to %d",n,res);
getchar();
getchar();
return 0;
    
}
       
      
