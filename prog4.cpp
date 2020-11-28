/*Write a program to find the largest of three numbers using nested if else.*/



#include<stdio.h>

int main()
{
    int a,b,c;
    printf("\n enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a >b  && a> c)
       printf("%d is greater of %d , %d ,  %d",a,a,b,c);
    else if (b >c && b>a)
       printf("%d is greater of %d , %d ,  %d",b,a,b,c);
    else
    printf("%d is greater of %d , %d ,  %d",c, a,b,c);
getchar();  
getchar();
return 0;
}
    

    
