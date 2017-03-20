#include <Complex_t.hpp>
#include <catch.hpp>

SCENARIO("def constructor")
{
	Complex_t complex;
	REQUIRE(complex.a_() == 0);
	REQUIRE(complex.b_() == 0);
}

SCENARIO("param constructor") 
{
	Complex_t complex(1, 2);
	REQUIRE(complex.a_() == 1);
	REQUIRE(complex.b_() == 2);
}

SCENARIO("copy constructor")
{
	Complex_t complex(1, 2);
	Complex_t copy(complex);
	REQUIRE(copy.a_() == 1);
	REQUIRE(copy.b_() == 2);
}

SCENARIO("operator *")
{
	Complex_t c1(3, 2);
	Complex_t c2(5, 4);
	Complex_t c3(15, 8);
	REQUIRE((c1*c2) == c3);
}

SCENARIO("operator /")
{
	Complex_t c1(4, 5);
	Complex_t c2(4, 5);
	Complex_t c3(1, 0);
	REQUIRE((c1 / c2) == c3);
}

SCENARIO("operator +=")
{
	Complex_t c1(11, 1);
	Complex_t c2(8, 3);
	Complex_t c3(19, 4);
	REQUIRE((c1 += c2) == c3);
}

SCENARIO("operator -=")
{
	Complex_t c1(6, 10);
	Complex_t c2(3, 6);
	Complex_t c3(3, 4);
	REQUIRE((c1 -= c2) == c3);
}

SCENARIO("operator *=")
{
	Complex_t c1(7, 6);
	Complex_t c2(5, 4);
	Complex_t c3(11, 58);
	REQUIRE((c1 *= c2) == c3);
}

SCENARIO("operator /=")
{
	Complex_t c1(2, 1);
	Complex_t c2(2, 1);
	Complex_t c3(1, 0);
	REQUIRE((c1 /= c2) == c3);
}

SCENARIO("operator =")
{
	Complex_t c1(5, 7);
	Complex_t c2 = c1;
	REQUIRE(c2 == c1);
}

SCENARIO("operator ==") 
{
	Complex_t c1(2, 5);
	Complex_t c2(2, 5);
	REQUIRE(c1 == c2);
}
