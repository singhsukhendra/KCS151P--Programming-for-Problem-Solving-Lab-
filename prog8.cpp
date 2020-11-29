/*
An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. 
For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.


Write a program to find whether the number is Armstrong number. 


*/


#include<stdio.h>

int main()
{
int n,m;
printf("\n enter a 3 digit  number ");
scanf("%d",&n);
m=n;
int un,tn,hn;

hn=n/100;
n=n%100;
tn=n/10;
n=n%10;
un=n;
n=m;

if(n== un*un*un + hn*hn*hn  +tn*tn*tn)
{
       printf("\n yes the given number is armstrong number ");
}
else
{
     printf("\n no the given number is not an armstrong number ");
    
}

  
getchar();
getchar();
return 0;
    
}
       
    


    
    
    
    
    
    
    
    



