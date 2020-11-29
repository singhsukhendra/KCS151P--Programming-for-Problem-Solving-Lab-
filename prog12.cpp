#include<stdio.h>

int main()
{
int n,m,i;
for(i=100;i<=500;i++)
{
n=i;
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
       printf("\n yes the %d is armstrong number ",n);
}

}
  
getchar();
getchar();
return 0;
    
}
       
    


    
    
    
