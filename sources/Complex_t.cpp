#include "Complex_t.hpp"

Complex_t :: Complex_t(): a(0.0), b(0.0)
{}
Complex_t :: Complex_t(double x, double y) : a(x), b(y)
{}
Complex_t :: Complex_t(const Complex_t&cop)
{
	a = cop.a;
	b = cop.b;
} 
double Complex_t :: a_()
{
	return a;
}

double Complex_t :: b_()
{
	return b;
}
bool Complex_t::operator == (const Complex_t& c2) const
{
	if ((a == c2.a) && (b == c2.b))
		return true;
}

Complex_t Complex_t::operator = (const Complex_t& result)
{
	if (this == &result) {
		return *this;
	}
	a = result.a;
	b = result.b;
	return *this;
}
istream& operator >> (istream&cin, Complex_t& result)
{
	cout << "Please enter real complex part:" << endl;
	cin >> result.a;
	cout << "Please enter imaginary complex part:" << endl;
	cin >> result.b;
	cout << endl;
	return cin;
}

ostream& operator << (ostream&cout, Complex_t& result)
{
	if (result.b < 0)
	{
		cout << result.a << result.b << "i" << endl;
	}
	else
		cout << result.a << "+" << result.b << "i" << endl;
	return cout;
}
Complex_t Complex_t::operator * (const Complex_t& c2) const
{
	return Complex_t(a*c2.a - b*c2.b, a*c2.b + c2.a*b);
}

Complex_t Complex_t::operator / (const Complex_t& c2) const
{
	return Complex_t((a*c2.a + b*c2.b) / (c2.a*c2.a + c2.b*c2.b), (c2.a*b - a*c2.b) / (c2.a*c2.a + c2.b*c2.b));
}

Сomplex_t Сomplex_t::operator += (const Сomplex_t& c2)
{
	a += c2.a;
	b += c2.b;
	return *this;
}

Сomplex_t Сomplex_t::operator -= (const Сomplex_t& c2)
{
	a -= c2.a;
	b -= c2.b;
	return *this;
}
Сomplex_t Сomplex_t::operator /= (const Сomplex_t& c2)
{
	float a_ = (a*c2.a + b*c2.b) / (c2.a*c2.a + c2.b*c2.b);
	b = (c2.a*b - a*c2.b) / (c2.a*c2.a + c2.b*c2.b);
	a = a_;
	return *this;
}

Сomplex_t Сomplex_t::operator *= (const Сomplex_t& c2)
{
	float a_ = a*c2.a - b*c2.b;
	b = a*c2.b + c2.a*b;
	a = a_;
	return *this;
}
