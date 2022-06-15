#include<stdio.h>
int main()
{
	float km,meter,feet,inches,centimeter;
	printf("Enter the distance between Mirpur and Ashulia: ");
	scanf("%f",&km);
	meter=km*1000; ///1km=1000meters
	feet=km*3280.8399; ///1km=3280.8399 feet
	inches=km*39370.078; ///1km=39370.078 inches
	centimeter=km*100000; ///1km=100000 centimeter
	
	printf("Distance in meter between Mirpur and Ashulia:%.2f\n",meter);
	printf("Distance in feet between Mirpur and Ashulia:%.2f\n",feet);
	printf("Distance in inches between Mirpur and Ashulia:%.2f\n",inches);
	printf("Distance in centimeter between Mirpur and Ashulia:%.2f\n",centimeter);
	
	
	
	return 0;
}

