#include "complex_t.hpp"

complex_t::complex_t(): real(0.0), image(0.0)
{}
complex_t::complex_t(double r, double im): real(r), image(im)
{}

complex_t::complex_t(const complex_t&copy)
{
	real = copy.real;
	image = copy.image;
}

double complex_t::real_() const
{
	return real;
}

double complex_t::image() const
{
	return image;
}

bool complex_t::operator == (const complex_t& m2) const
{
	if ((real == m2.real) && (image == m2.image))
	return true;
}

complex_t complex_t::operator = (const complex_t& result)
{
	if (this !=result)
	{
		real = result.real;
		image = result.image;
		return *this;
	}
}

istream& operator >> (istream&cin, complex_t& result)
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

complex_t complex_t::operator * (const complex_t& m2) const
{
	return complex_t(real*m2.real - image*m2.image, real*m2.image + m2.real*image);
}


complex_t complex_t::operator / (const complex_t& m2) const
{
	return complex_t((real*m2.real + image*m2.image) / (m2.real*m2.real), (m2.real*image - real*m2.image) / (m2.real*m2.real + m2.image*m2.image));
}


complex_t complex_t::operator += (const complex_t& m2)
{
	real += m2.real;
	image += m2.image;
	return *this;
}


complex_t complex_t::operator -= (const complex_t& m2)
{
	real -= m2.real;
	image -= m2.image;
	return *this;
}


complex_t complex_t::operator /= (const complex_t& m2) 
{
	float real_ = (real*m2.real + image*m2.image) / (m.real*m2.real + m.image*m2.image);
	image = (m2.real*image - real*m2.image) / (m2.real*m2.real + m2.image*m2.image);
	real = real_;
	return *this;
}


complex_t complex_t::operator *= (const complex_t& m2) 
{
	double real_ = real*m2.real - image*m2.image;
	image = real*m2.image + m2.real*image;
	real = real_;
	return *this;
}
