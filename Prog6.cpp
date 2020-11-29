/*
Write a program to find the value of y for a particular value of n. The a, x, b, n is input by user
       if n=1 y=ax%b
       if n=2 y=ax2+b2
       if n=3 y=a-bx
       if n=4 y=a+x/b 
       
       */
       
       
#include<stdio.h>

int main()
{
int a,x,b,n,y;
printf("\n enter the value of a , x  , b and n");
scanf("%d%d%d%d",&a,&b,&x,&n);
if(n==1)
{
 y= a*x%b;
 printf("the value of y is equal to %d",y);
}
else if(n==2)
{
 y= a*x*x + b*b ;
 printf("the value of y is equal to %d",y);
}
else if(n==3)
{
 y= a*x %b;
 printf("the value of y is equal to %d",y);
}
else if(n==4)
{
 y= a-x*b;
 printf("the value of y is equal to %d",y);
}

getchar();
getchar();
return 0;
}
