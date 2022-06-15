#include<stdio.h>
int main()
{
	double fahrenheit,centigrade;
	
	printf("Enter the temperature of a city in fahrenheit:");
	scanf("%lf",&fahrenheit);
	
	centigrade=(5.0/9.0)*(fahrenheit-32); 
	
	printf("Temperature in centigrade:%.2lf ",centigrade);
	
	
	return 0;
}
