/*Write a program to receive marks of physics, chemistry & maths from user
& check its eligibility for course if
a) Marks of physics > 40
b) Marks of chemistry > 50
c) Marks of math’s > 60
d) Total of physics & math’s marks > 150
or
e) Total of three subjects marks > 200 


*/


#include<stdio.h>


int main()
{
  int marks_physics,marks_chemistry,marks_maths;
  printf("\n enter the marks in physics, chemistry and maths");
  scanf("%d%d%d",&marks_physics,&marks_chemistry,&marks_maths);
  if(  marks_physics >40||marks_chemistry >50||marks_maths > 60||(marks_physics+marks_chemistry+marks_maths > 150))
    printf("He is eligible");
    else if(marks_physics+marks_chemistry > 200||marks_chemistry+marks_maths >200|| marks_physics+marks_maths > 200)
      printf("He is eligible");
      
   else
   {
       printf("\n he is not eligible");
   }


getchar();  
getchar();
return 0;
}
    
    
