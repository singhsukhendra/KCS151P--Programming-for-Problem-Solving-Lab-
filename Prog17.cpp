/*
Write a program to calculate the factorial for given number using function.


*/


#include<stdio.h>

int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
     f=f*i;      
     }  
return f;
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
