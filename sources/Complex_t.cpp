#include "Complex_t.hpp"

Complex_t Complex_t::add(const Complex c1) const 
{
	Complex_t r;
	r.a = a + c1.a;
	r.b = b + c1.b;
	return r;
}
Complex_t Complex_t::sub(const Complex c2) const 
{
	Complex_t l;
	l.a = a - c2.a;
	l.b = b - c2.b;
	return l;
}
Complex_t Complex_t::multInt(const int n) const 
{
	Complex_t q;
	q.a = a * n;
	q.b = b * n;
	return q;
}
Complex_t Complex_t::divInt(const int n) const 
{
	Complex_t t;
	t.a = a / n;
	t.b = b / n;
	return t;
}
