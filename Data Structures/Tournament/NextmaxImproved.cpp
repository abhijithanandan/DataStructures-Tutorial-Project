#include "NextmaxImproved.h"

#include <stdio.h>

NextmaxImproved::NextmaxImproved() {
	int tourn[100], n, i;
	printf("Given n:");
	scanf_s("%d", &n);
	printf("\n n  = %d \n", n);
	for (i = n; i <= 2 * n - 1; i++)
		scanf_s("%d", &tourn[i]);

	buildtourn(tourn, n);
	
	printf("\n MAX = %d \n", tourn[1]);
	printf("Next MAX = %d \n", nextmax(tourn, n));
	for (i = 0; i <= 2 * n - 1; i++)
		printf(" tourn[%d] = %d \n", i, tourn[i]);

}

NextmaxImproved::~NextmaxImproved() {
	
}

int NextmaxImproved::buildtourn(int tourn[], int n)
{
	int i;
	for (i = 2 * n - 2; i > 1; i = i - 2)
		tourn[i / 2] = maxi(tourn[i], tourn[i + 1]);
	return 0;
}

int NextmaxImproved::nextmax(int tourn[], int n)
{
	int i = 2, next;
	next = mini(tourn[2], tourn[3]);
	while (i <= 2 * n - 1) {
		if (tourn[i] > tourn[i + 1]) {
			next = maxi(tourn[i + 1], next);
			i = 2 * i;
		}
		else {
			next = maxi(tourn[i], next);
			i = 2 * (i + 1);
		}
		return(next);
	}
}

int NextmaxImproved::maxi(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}

int NextmaxImproved::mini(int a, int b) {
	if (a >= b)
		return b;
	else
		return a;
}
