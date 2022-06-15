#include<stdio.h>
int main()
{
	
	double side_1,side_2,side_3,area,perimeter;
	///side_1,side_2,side_3 is consider as length,base,height of a triangle.
	
	printf("Enter the 1st side of the traingle:");
	scanf("%lf",&side_1);
	printf("Enter the 2nd side of the traingle:");
	scanf("%lf",&side_2);
	printf("Enter the 3rd side of the traingle:");
	scanf("%lf",&side_3);
	
	area=0.5*side_2*side_3;
	perimeter=side_1+side_2+side_3;
	
	
	if(area>perimeter)
	{
		printf("Area is greatar than perimeter");
	}
	else
	{
		printf("Perimeter is greater than area");
	}
	
	return 0;	
}
