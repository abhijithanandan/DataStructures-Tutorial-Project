#include "ComplexNumber.h"
#include <stdio.h>

ComplexNumber::ComplexNumber() {
}

ComplexNumber::~ComplexNumber()
{
}

void ComplexNumber::Run()
{

	complex a, b, c;
	read_complex(&a);
	read_complex(&b);
	c = add_complex(a, b);
	write_complex(c);

}

complex ComplexNumber::add_complex(complex x, complex y) 
{
	complex temp;
	temp.real = x.real + y.real;
	temp.imag = x.imag + y.imag;
	return temp;
}

void ComplexNumber::read_complex(complex* x) {
	scanf("%f%f", &(x->real), &(x->imag));
}

void ComplexNumber::write_complex(complex x)
{
	char c[3] = "+j";
	if (x.imag < 0) {
		c[0] = '-';
		x.imag = -x.imag;
	}
	printf("%f5.2f %s%5.2f\n", x.real, c, x.imag);
}
