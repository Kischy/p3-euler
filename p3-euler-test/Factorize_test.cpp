#include "pch.h"

#include "../p3-euler/src/Factorize.h"


class FactorizeChecker : public testing::Test
{
public:
	Factorize factorize;
};


TEST(FactorizeTester, FactorizeClassExists) {
	Factorize factorize;

	//ASSERT_FALSE(primechecker.is_prime_number(0));
	//ASSERT_FALSE(primechecker.is_prime_number(1));
}

TEST_F(FactorizeChecker, FactorizationOfTwo)
{
	std::vector<unsigned long long> factors = { 2 };
	ASSERT_EQ(factorize.factorize(2), factors);
}

TEST_F(FactorizeChecker, FactorizationOfSix)
{
	std::vector<unsigned long long> factors = { 2, 3 };
	ASSERT_EQ(factorize.factorize(6), factors);
}


TEST_F(FactorizeChecker, FactorizationOf2313214)
{
	std::vector<unsigned long long> factors = { 2 , 29 , 39883 };
	ASSERT_EQ(factorize.factorize(2313214), factors);
}

