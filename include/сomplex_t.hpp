#include <iostream>

using namespace std;

class complex_t
{
private:
	double real, image;
	
public:
	complex_t();	
	complex_t(double r, double im);
	complex_t(const complex_t&copy);	
	double real_() const;
	double image_() const;
	
	complex_t operator * (const complex_t& m2) const;
	complex_t operator / (const complex_t& m2) const;
	complex_t operator += (const complex_t& m2); 
	complex_t operator -= (const complex_t& m2);
	complex_t operator *= (const complex_t& m2);
	complex_t operator /= (const complex_t& m2);
	complex_t operator = (const complex_t& result);
	bool operator == (const complex_t& m2) const;
	friend istream& operator >> (istream&,complex_t& result);
	friend ostream& operator << (ostream&,const complex_t& result);
};
