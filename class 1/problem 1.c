#include<stdio.h>
int main ()
{
	double basic_salary,dearness_allowance,house_rent,gross_salary;
	
	printf("Niloy's basic salary:");
	scanf("%lf",&basic_salary);
	dearness_allowance=basic_salary*0.4;
	house_rent=basic_salary*0.2;
	gross_salary=basic_salary-dearness_allowance-house_rent;
	
	printf("Niloy's gross salary is:%.2lf",gross_salary);
	
	return 0;
}

