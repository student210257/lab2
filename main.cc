#include <stdio.h>
#include <math.h>
#include "Array.hh"

using namespace std;

#pragma mark -
#pragma mark Prototypy

float circle_circumference(float radius);
float circle_area(float radius);

int main()
{
	float circle_location_x = 5.;
	float circle_location_y = 2.;
	float circle_radius = 10.;
	
	printf("Circle location is %.1fx%.1f\n", circle_location_x, circle_location_y);
	printf("Circle circumference is %.2f.\n", circle_circumference(circle_radius));
	printf("Circle area is %.2f.\n", circle_area(circle_radius));
}

#pragma mark -
#pragma mark Funkcje

float circle_circumference(float radius)
{
	return 2 * M_PI * radius;
}

float circle_area(float radius)
{
	return M_PI * pow(radius,2);
}