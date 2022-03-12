#include "Fibonacci.h"

#include <stdio.h>

Fibonacci::Fibonacci() {}
Fibonacci::~Fibonacci() {}

void Fibonacci::Run() {
	int n;
	scanf_s("%d", &n);
	printf("\n fib(%d) = %d \n", n, Fib(n));
}

int Fibonacci::Fib(int m) {
	if (m == 0) return(0);
	else if (m == 1) return(1);
	else return(Fib(m - 1) + Fib(m - 2));
}


