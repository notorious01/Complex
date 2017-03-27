#include <Complex_t.hpp>
#include <catch.hpp>
SCENARIO("def constructor")
{
	Complex_t Complex;
	REQUIRE(Complex.real_() == 0);
	REQUIRE(Complex.image_() == 0);
}

SCENARIO("param constructor")
{
	Complex_t Complex(1, 2);
	REQUIRE(Complex.real_() == 1);
	REQUIRE(Complex.image_() == 2);

SCENARIO("copy constructor")
{
	Complex_t Complex(1, 2);
	Complex_t copy(Complex);
	REQUIRE(copy.real_() == 1);
	REQUIRE(copy.image_() == 2);
}

SCENARIO("operator *")
{
	Complex_t m1(7, 6);
	Complex_t m2(5, 4);
	Complex_t m3(11, 58);
	REQUIRE((m1*m2) == m3);
}

SCENARIO("operator /")
{
	Complex_t m1(4, 5);
	Complex_t m2(4, 5);
	Complex_t m3(1, 0);
	REQUIRE((m1 / m2) == m3);
}

SCENARIO("operator +=")
{ 
	Complex_t m1(11, 1);
	Complex_t m2(8, 3);
	Complex_t m3(19, 4);
	REQUIRE((m1 +=m2) == m3); 
}

SCENARIO("operator -=")
{ 
	Complex_t m1(6, 10);
	Complex_t m2(3, 6);
	Complex_t m3(3, 4);
	REQUIRE((m1 -=m2) == m3); 
}

SCENARIO("operator *=")
{
	Complex_t m1(7, 6);
	Complex_t m2(5, 4);
	Complex_t m3(11, 58);
	REQUIRE((m1 *= m2) == m3);
}

SCENARIO("operator /=")
{
	Complex_t m1(2,1);
	Complex_t m2(2,1);
	Complex_t m3(1,0);
	REQUIRE((m1 /= m2) == m3);
}

SCENARIO("operator =")
{
	Complex_t m1(5, 7);
	Complex_t m2 = m1;
	REQUIRE (m2 == m1);
}

SCENARIO("operator ==")
{
	Complex_t m1(2, 5);
	Complex_t m2(2, 5);
	REQUIRE(m1 == m2);
}
