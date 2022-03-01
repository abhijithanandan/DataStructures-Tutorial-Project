#include "MaxnMin.h"

#include <stdio.h>

MaxnMin::MaxnMin()
{
	//int n, max, min, i, numb;
	//printf("Give n:");
	//scanf_s("%d", &n);
	//printf("\n n = %d \n", n);
	//scanf_s("%d", &max);
	//min = max;
	//for (i = 1; i < n - 1; i++)
	//{
	//	scanf_s("%d", &numb);
	//	if (numb > max) max = numb;
	//	else if (numb < min) min = numb;
	//}

	//printf("MAX = %d, MIN = %d \n", max, min);

	/* A more effiecent method than above */

	int n, m, max, min, i, numb1, numb2;

	/* READ N */
	printf("Given n :");
	scanf_s("%d", &n);
	printf("\n n = %d \n", n);

	/* INITITALIZE MAX AND MIN */
	scanf_s("%d", &max);
	min = max;
	m = n - 1;
	if (n % 2 == 0) {
		scanf_s("%d", &min);
		if (max < min) swap(&max, &min);
		m = m - 1;
	}

	/* Fill up the arrays large & small */
	for (i = 1; i < m / 2; i++) {
		scanf_s("%d%d", &numb1, &numb2);
		if (numb1 < numb2) swap(&numb1, &numb2);
		if (numb1 > max) max = numb1;
		if (numb2 < min) min = numb2;
		
	}

	/* Print the results */
	printf("\n MAX = %d, MIN = %d \n", max, min);


}
MaxnMin::~MaxnMin()
{

} 

int MaxnMin::swap( int* i, int* j) {
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
	return 0;
}
