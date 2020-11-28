/*Write a program to determine the roots of quadratic equation*/


#include<stdio.h>
#include<math.h>

int main()
{
   float a,b,c,det,root1,root2;
   float real,imag;
   printf("\n enter the coefficent of quadratic equation");//ax^2+bx+c=0
   scanf("%f%f%f",&a,&b,&c);
   det=b*b-4*a*c;
   if(det<0)
   {
      printf("roots will be complex\n");
      real=(-b*.5)/a;
      imag=sqrt(-det)*.5/a;
      
      printf("\nthe one root is %f+ %fi",real,imag);
      printf("\nthe other root is %f- %fi",real,imag);
      }
      
      
   else
     {
                   
      root1=(-b+sqrt(det))/2*a;
      
      
      root2=(-b-sqrt(det))/2*a;
      
      
      printf("one root is %f\n",root1);
   
      printf("the other  root is %f\n",root2);
      }
    getchar();  
    getchar();
    return 0;
}
    



