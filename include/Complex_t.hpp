#include <iostream> 
#include <stdlib.h> 
#include <conio.h> 
using namespace std;

class Complex{
	 double a, b;
public:
	 Complex Read();
	 Complex add(const Complex c1) const ;
	 Complex sub(const Complex c2) const ;
	 Complex multInt(const int n) const ;
	Complex divInt(const int n) const ;
	Complex(double x = 0, double y = 0)
	{
		a = x;
		b = y;
	}
	void print(std::ostream & stream) const
	{
		if (b >= 0)
		stream <<  a << "+" << b << "i\n";
		else
			stream << a << b << "i\n";
	}
};
