#include <iostream>

using namespace std;

class Complex_t
{
private:
	double real, image;
public:
	Complex_t();
	Complex_t(double r, double im);
	Complex_t(const complex_t&copy);
	double real_() const;
	double image_() const;
	
	Complex_t operator * (const Complex_t& m) const;
	Complex_t operator / (const Complex_t& m) const;
	Complex_t operator += (const Complex_t& m);
	Complex_t operator -= (const Complex_t& m);
	Complex_t operator *= (const Complex_t& m);
	Complex_t operator /= (const Complex_t& m);
	Complex_t operator = (const Complex_t& result);
	bool operator == (const Complex_t& m) const;
	friend istream& operator >> (istream&cin, complex_t& 			result;
	friend ostream& operator << (ostream&cout, const 				complex_t& result);
};  
