#include <iostream>

using namespace std;

class Complex_t
{
private:
	float a;
	float b;
public:
	Сomplex_t();
	Complex_t(double x, double y);

	Complex_t(const Complex_t&cop);

	double a_();
	double b_();

	Complex_t operator * (const Complex_t& c2) const;
	Complex_t operator / (const Complex_t& c2) const;
	Complex_t operator += (const Complex_t& c2);
	Complex_t operator -= (const Complex_t& c2);
	Complex_t operator *= (const Complex_t& c2);
	Complex_t operator /= (const Complex_t& c2);
	Complex_t operator = (const Complex_t& result); 
	bool operator == (const Сomplex_t& c2) const;
	Complex_t operator >> ();
	Complex_t operator << (std::ostream & stream) const;
};
