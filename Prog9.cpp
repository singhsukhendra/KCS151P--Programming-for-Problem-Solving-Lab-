/*

 Write a program to generate sum of series 1!+2!+3!+--------------n! 

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
int n,sum=0;
printf("\n enter the value of n ");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
sum=sum+fact(i);
printf("\n the sum of series for %d terms is equal to %d",i,sum);
}

//printf("the sum of series for %d is equal to %d",n,sum);


getchar();
getchar();
return 0;
    
}           
