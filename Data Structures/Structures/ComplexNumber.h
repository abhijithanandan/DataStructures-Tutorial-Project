#pragma once

typedef struct {
		float real;
		float imag;
	} complex;

class ComplexNumber
{
public:
	ComplexNumber();
	~ComplexNumber();
protected:
	void Run();
	complex add_complex(complex, complex);
	void read_complex(complex*);
	void write_complex(complex);
};

