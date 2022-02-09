#include "Roots.h"

#include <stdio.h>
#include <math.h>

Roots::Roots()
{
	double a, b, c, r1, r2;
	scanf_s("%f%f%f", &a, &b, &c);
	r1 = (-b + sqrt(b*b-4.0*a*c))/(2.0*a);
	r2 = (-b - sqrt(b*b-4.0*a*c))/(2.0*a);
	printf("root1 = %f, root2 = %f \n", r1, r2);
	
	// A more efficient method is to precompute the values like b^2-4ac
}
Roots::~Roots() 
{
	
}
