#include "MaxnMin.h"

#include <stdio.h>

MaxnMin::MaxnMin()
{
	int n, max, min, i, numb;
	printf("Give n:");
	scanf_s("%d", &n);
	printf("\n n = %d \n", n);
	scanf_s("%d", &max);
	min = max;
	for (i = 1; i < n - 1; i++)
	{
		scanf_s("%d", &numb);
		if (numb > max) max = numb;
		if (numb < min) min = numb;
	}

	printf("MAX = %d, MIN = %d \n", max, min);
}
MaxnMin::~MaxnMin()
{

}
