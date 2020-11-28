/*  Basic salary of an employee is input through the keyboard. The DA is 25%
of the basic salary while the HRA is 15% of the basic salary. Provident
Fund is deducted at the rate of 10% of the gross salary (BS+DA+HRA).
Program to calculate the Net Salary. 


*/



#include<stdio.h>

int main()
{
float bs,da,hra,fund,gross_salary,net_salary;
printf("enter basic salary of the employee");
scanf("%f",&bs);
da=bs*.25;
hra=bs*.10;
gross_salary=bs+da+hra;
fund=gross_salary*.10;

net_salary=gross_salary+fund;
printf("the net salary of the employee is %f",net_salary);
getchar();  
getchar();
return 0;
}
