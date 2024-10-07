#include <iostream>
#include <string>
#include <functional>
// #include <catch2/catch_test_macros.hpp>
#include <gtest/gtest.h>

double _sin(double x)
{
	return std::sin(x);
}

double _cos(double x)
{
	return std::cos(x);
}

double _exp(double x)
{
	return std::exp(x);
}

double calculate(double epsilon, int f_num)
{
	double x = 1;
	double x0 = 0.5;

	std::function<double(double)> function;

	switch (f_num)
	{
	case(1):
		function = _sin;
		break;
	case(2):
		function = _cos;
		break;
	case(3):
		function = _exp;
		break;
	default:
		break;
	}

	while (std::abs(x - x0) > epsilon)
	{
		x0 = x;
		x = function(x);
	}

	return x0;

}

TEST(firstTest, BasicAssertions) {
  EXPECT_STRNE("hello", "world");
  EXPECT_EQ(7 * 6, 42);
  EXPECT_NEAR(calculate(0.001, 2), 0.739567, 0.001);
}


// TEST_CASE("test1", "[te]") {
//	REQUIRE((calculate(0.001, 2) - 0.739567) < 0.001);
// }


// TEST_CASE("test2", "[te]") {
// 	REQUIRE(calculate(0.001, 2) == 0.1);
// }


// TEST_CASE("test3", "[te]") {
//	REQUIRE(calculate(0.001, 1) == 0);
// }