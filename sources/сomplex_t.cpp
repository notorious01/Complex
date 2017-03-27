#include "сomplex_t.hpp"
complex_t::complex_t() : real(0.0), image(0.0)
{}
complex_t::complex_t(double r, double im) : real(r), image(im)
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

double complex_t::image_() const
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
	if (this != &result) 
	{
	real = result.real;
	image = result.image;
	return *this;
	}

}

istream& operator >> (istream& is, complex_t& result) 
{
	cout << "Please enter real complex part:" << endl;
	is >> result.real;
	cout << "Please enter imaginary complex part:" << endl;
	is >> result.image;
	cout << endl;
	return is;
}

ostream& operator << (ostream& os,const complex_t& result)
{
	if (result.image < 0)
	{
		os << result.real << result.image << "i" << endl;
	}
	else
		os << result.real << "+" << result.image << "i" << endl;
	return os;
}

////////////////////////////////////////////////////////////////////////////////

complex_t complex_t::operator * (const complex_t& m2) const
{
	return complex_t(real*m2.real - image*m2.image, real*m2.image + m2.real*image);
}

complex_t complex_t::operator / (const complex_t& m2) const
{
	return complex_t((real*m2.real + image*m2.image) / (m2.real*m2.real + m2.image*m2.image), (m2.real*image - real*m2.image) / (m2.real*m2.real + m2.image*m2.image));
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
	float real_ = (real*m2.real + image*m2.image) / (m2.real*m2.real + m2.image*m2.image);
	image = (m2.real*image - real*m2.image) / (m2.real*m2.real + m2.image*m2.image);
	real = real_;
	return *this;
}

complex_t complex_t::operator *= (const complex_t& m2) 
{
	float real_ = real*m2.real - image*m2.image;
	image = real*m2.image + m2.real*image;
	real = real_;
	return *this;
}
