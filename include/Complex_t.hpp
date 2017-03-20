#include <iostream> 
#include <stdlib.h> 
#include <conio.h> 
using namespace std;

class Complex_t{
	 double a, b;
public:
	 Complex_t Read();
	 Complex_t add(const Complex c1) const ;
	 Complex_t sub(const Complex c2) const ;
	 Complex_t multInt(const int n) const ;
	Complex_t divInt(const int n) const ;
	Complex_t(double x = 0, double y = 0)
	{
		a = x;
		b = y;
	}
	
};
