#include <iostream>
#include "Intro.h"

#include <stdio.h>
#include <math.h>

Intro::Intro()
{
	std::cout << "Introduction" << std::endl;

	int n;
	printf("give the integer: ");
	scanf_s("%d", &n);
	printf("The value of n = %d \n", n);

}

Intro::~Intro()
{
	std::cout << "End of Introduction" << std::endl;
}