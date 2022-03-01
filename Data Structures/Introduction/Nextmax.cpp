#include "Nextmax.h"

#include <stdio.h>

Nextmax::Nextmax() {
	//int i, n, max, nextmax, numb;
	//printf("Give n:");
	//scanf_s("%d", &n);
	//scanf_s("%d", &max);
	//nextmax = max;
	//if (max < nextmax) swap(max, nextmax);
	//for (i = 0; i < n - 1; i++) {
	//	scanf_s("%d", &numb);
	//	if (numb > max) {
	//		nextmax = max;
	//		max = numb;
	//	}
	//	else if (numb > nextmax) nextmax = numb;
	//}

	//printf("\n MAX = %d, SECOND MAX = %d \n", max, nextmax);

	//Better approach
	int tourn[100], i, n;
	/* READ */
	printf(" Given n: ");
	scanf_s("%d", &n);
	printf("\n n = %d \n", n);
	for (i = n; i <= 2 * n - 1; i++) {
		scanf_s("%d", &tourn[i]);
	}

	/* COMPUTE */
	for (i = 2 * n - 2; i > 1; i = i - 2)
	{
		tourn[i / 2] = maxi(tourn[i], tourn[i + 1]);
	}
				
	for (i = 1; i <= 2 * n - 1; i++)
		printf("%d ", tourn[i]);
	printf("\n");
}

Nextmax::~Nextmax() {

}

void Nextmax::swap(int& i, int& j) {
	int temp;
	temp = i;
	i = j;
	j = temp;
}

int Nextmax::maxi(int i, int j) {
	if (i > j) return(i);
	else return(j);
}
