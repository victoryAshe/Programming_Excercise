// 복소수 클래스 구현

#include<iostream>
using namespace std;

class Complex
{
public:
	float real;
	float imag;

	Complex(float r, float i)
	{
		real = r;
		imag = i;
	}

	void add(Complex c)
	{
		real += c.real;
		imag += c.imag;
	}

	void sub(Complex c)
	{
		real -= c.real;
		imag -= c.imag;
	}

	void mul(Complex c)
	{
		float r = real; float i = imag;
		real = r * c.real - i * c.imag;
		imag = r * c.imag + i * c.real;
	}

	void div(Complex c)
	{
		float r = real; float i = imag;
		real = (r * c.real + i * c.imag) / (c.real * c.real + c.imag * c.imag);
		imag = (c.real * i - r * c.imag) / (c.real * c.real + c.imag * c.imag);
	}

	void print()
	{
		if (real != 0)
			cout << real << "+ " << imag << "i" << endl;
		else if (imag == 1)
			cout << "i" << endl;
		else if (imag == -1)
			cout << "-i" << endl;
		else
			cout << imag << "i" << endl;
			
			
	}
};

/*
int main()
{
	Complex c1 = Complex(1, 1);
	Complex c2 = Complex(1, -1);
	c1.div(c2);
	c1.print();

	return 0;
}
*/