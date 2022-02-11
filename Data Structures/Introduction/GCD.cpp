#include "GCD.h"

#include <stdio.h>

GCD::GCD()
{
	int n1, n2, n3;
	scanf_s("%d%d", &n1, &n2);
	n3 = gcd(n1, n2);
	printf_s("GCD of %d & %d = %d \n", n1, n2, n3);
}

GCD::~GCD()
{
	
}

int GCD::gcd(int i, int j)
{
	int temp;
	if (i < j) 
	{
		temp = i; i = j; j = temp;
	}
	while (i % j != 0)
	{
		temp = i % j; i = j; j = temp;
	}
	return(j); 
}

