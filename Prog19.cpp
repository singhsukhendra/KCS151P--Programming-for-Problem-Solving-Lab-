/*
Write a program to calculate the factorial for given number using function.


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
int sum=0;

for(int i=1;i<=n;i++)
{

sum=sum+fact(i);

}      


printf("\n the sum of the series for n equal to  %d is equal to %d",n,sum);
getchar();
getchar();
return 0;
    
}
