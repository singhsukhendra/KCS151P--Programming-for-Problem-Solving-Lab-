/*


Write a program to print the entire prime no between 1 and 300. 

*/

#include<stdio.h>


int isprime(int k)
{ 
int nod=0;
  
  for(int i=2;i<k;i++)
  {
    if(k%i==0)
    {
     nod++;
     break;
     }
   }
   
   if(nod==0)
    return 1;
    else
    return 0;
  
}




int main()
{
    
int n;
    
printf("enter an integer value");
scanf("%d",&n);

for(int i=2;i<=n;i++)
{
  if(isprime(i))
  { 
   printf("\n %d",i);
   }
}
getchar();
getchar(); 
return 0;
    
}

    
