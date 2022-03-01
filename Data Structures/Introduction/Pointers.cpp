#include "Pointers.h"

#include <stdio.h>

Pointers::Pointers() {
	int i = 5, j = 10;
	printf("Beofre log1: i = %d, j = %d \n", i, j);
	log1(i, j);
	printf("After log1: i = %d, j = %d \n", i, j);
	i = 5, j = 10;
	printf("Beofre log2: i = %d, j = %d \n", i, j);
	log2(&i, &j);
	printf("After log2: i = %d, j = %d \n", i, j);
	i = 5, j = 10;
	printf("Beofre log3: i = %d, j = %d \n", i, j);
	log3(i, j);
	printf("After log3: i = %d, j = %d \n", i, j);
	
}

Pointers::~Pointers() {

}

void Pointers::log1(int i, int j) {
	i = 15; j = 20;
	printf("Within log1: i = %d, j = %d \n", i, j);
}

void Pointers::log2(int* i, int* j) {
	*i = 15; *j = 20;
	printf("Within log1: i = %d, j = %d \n", *i, *j);
}

void Pointers::log3(int& i, int& j) {
	i = 15; j = 20;
	printf("Within log1: i = %d, j = %d \n", i, j);
}
