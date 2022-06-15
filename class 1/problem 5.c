#include<stdio.h>
#define pi 3.1416
int main()
{
	double length,breadth,radius,area_rectangle,perimeter_rectangle,area_circle,circumference_circle;
	
	printf("Enter the length of a rectangle:");
	scanf("%lf",&length);
	printf("Enter the breadth of a rectangle:");
	scanf("%lf",&breadth);
	printf("Enter the radius of a circle:");
	scanf("%lf",&radius);
	
	area_rectangle=length*breadth;
	perimeter_rectangle=2*(length+breadth);
	area_circle=pi*radius*radius;
	circumference_circle=2*pi*radius;
	
	printf("Area of the rectangle:%.2lf\n",area_rectangle);
	printf("Perimeter of the rectangle:%.2lf\n",perimeter_rectangle);
	printf("Area of the circle:%.2lf\n",area_circle);
	printf("Circumference of the circle:%.2lf\n",circumference_circle);
	
	return 0;
	
	
}
