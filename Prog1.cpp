#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,s,area;
printf("enter all three sides of the triangle");
scanf("%f%f%f",&a,&b,&c);
if((a+b<=c)||(b+c<=a)||(a+c<=b))
{
    printf("the triangle is not possible with given sides");
    
}
else
{
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));

printf("the area of the given triangle is %f",area);
}
getchar();  
return 0;
}
