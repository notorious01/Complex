#include "Complex_t.hpp"

Complex_t::Complex_t(): real(0.0), image(0.0)
{}
Complex_t::Complex_t(double r, double im): real(r), image(im)
{}

Complex_t::Complex_t(const Complex_t&copy)
{
	real = copy.real;
	image = copy.image;
}

double Complex_t::real_() const
{
	return real;
}

double Complex_t::image() const
{
	return image;
}

bool Complex_t::operator == (const complex_t& m) const
{
	if ((real == m.real) && (image == m.image))
	return true;
}

Complex_t Complex_t::operator = (const Complex_t& result)
{
	if (this !=result)
	{
		real = result.real;
		image = result.image;
		return *this;
	}
}

istream& operator >> (istream&cin, Complex_t& result)
{
	cout << "Vvedite real complex:" << endl;
	cin >> result.real;
	cout << "Vvedite image comples:" << endl;
	cin >> result.image;
	cout << endl;
	return cin;
}

ostream& operator << (ostream&cout, const complex_t& result)
{
	if (result.image < 0)
	{
		cout << result.real << result.image << "i" << endl;
	}
	else
		cout << result.real << "+" <<result.image << "i" << endl;
	return cout;
}

/////////////////////////////////////////////////////////

Complex_t Complex_t::operator * (const Complex_t& m) const
{
	return Complex_t(real*m.real - image*m.image, real*m.image + m.real*image);
}


Complex_t Complex_t::operator / (const Complex_t& m) const
{
	return Complex_t((real*m.real + image*m.image) / (m.real*m.real), (m.real*image - real*m.image) / (m.real*m.real + m.image*m.image));
}


Complex_t Complex_t::operator += (const Complex_t& m)
{
	real += m.real;
	image += m.image;
	return *this;
}


Complex_t Complex_t::operator -= (const Complex_t& m)
{
	real -= m.real;
	image -= m.image;
	return *this;
}


Complex_t Complex_t::operator /= (const Complex_t& m) 
{
	float real_ = (real*m.real + image*m.image) / (m.real*m.real + m.image*m.image);
	image = (m.real*image - real*m.image) / (m.real*m.real + m.image*m.image);
	real = real_;
	return *this;
}


Complex_t Complex_t::operator *= (const Complex_t& m) 
{
	double real_ = real*m.real - image*m.image;
	image = real*m.image + m.real*image;
	real = real_;
	return *this;
}
