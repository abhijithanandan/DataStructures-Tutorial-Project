#include "SortingTree.h"

#include <stdio.h>

SortingTree::SortingTree() {
	int tourn[100], n, i, min;
	printf("Give n: ");
	scanf_s("%d", &n);
	printf("\n n = %d \n", n);
	for (i = n; i < 2 * n - 1; i++)
		scanf_s("%d", &tourn[i]);

	buildtourn(tourn, n);
	min = minval(tourn, n) - 1;

	printf("\n Sorted Items are: \n");
	for (i = 1; i <= n; i++) {
		printf("%d", tourn[1]);
		getnext(tourn, n, min);
	}
	printf("\n");
}

int SortingTree::getnext(int tourn[], int n, int min) {
	int i = 2;

	/* DOWNWARD TRAVERSAL */
	while (i<=2*n-1)
	{
		if (tourn[i] > tourn[i + 1]) {
			tourn[i] = min;
			i = 2 * i;
		}
		else {
			tourn[i + 1] = min;
			i = 2 * (i + 1);
		}
	}
	/* UPWARDS RECOMPUTATION */
	for (i = i / 2; i > 1; i = i / 2) {
		if (i % 2 == 0)
			tourn[i / 2] = maxi(tourn[i], tourn[i + 1]);
		else
			tourn[i / 2] = maxi(tourn[i], tourn[i - 1]);
	}
	return 0;
}

int SortingTree::minval(int tourn[], int n) {
	int i, min=tourn[n];
	for (i = n+1; i <= 2 * n - 1; i++) {
		if (tourn[i] < min)
			min = tourn[i];
	}
	return min;
}

SortingTree::~SortingTree() {

}
