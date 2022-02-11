#include "Factorial.h"

#include <stdio.h>

// We can get an inductive defininion of factorial problem. 
// We can use inductive definion to write program in C becuase it allows a function to call itself

Factorial::Factorial()
{
	int n, m;
	scanf_s("%d", &n);
	m = fact(n);
	printf("\n Fact(%d) = %d \n", n, m);
	
}

Factorial::~Factorial()
{

}

int Factorial::fact(int i)
{
	int m = 1;
	if (i > 1) m = i * fact(i - 1);
	return(m);
}
