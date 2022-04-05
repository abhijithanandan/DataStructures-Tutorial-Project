#include "String.h"

#include <stdio.h>

String::String() {

}

String::~String() {

}

void String::Run() {
	char LIST[20], PERM[20];
	int n, r;
	printf("Give n and r: ");
	scanf_s("%d%d", &n, &r);
	printf("Give the characters as a string: \n");
	scanf_s("%s", LIST);
	printf("\n The list is %s \n", LIST);
	permut(LIST, n, r, PERM);
	printf("\n");
}

void String::delList(char L[], int i, int n, char NEW[]) {
	int j;
	for (j = 0; j < i; j++) NEW[j] = L[j];
	for (j = i; j < n - 1; j++) NEW[j] = L[j + 1];
}

int String::permut(char L[], int n, int r) {
	char FINAL[100], RES[100], NEW[100];
	if (r == 0) return;
	else {
		for (int i = 0; i < n; i++) {
			delList(L, i, n, NEW);
			RES = permut(NEW, n - 1, r - 1);
			FINAL = append(RES, L[i]);
		}
		return FINAL;
	}
}

void String::append(char RES[], char L[]) {

}
