#include "pch.h"

#include "../p3-euler/src/PrimeChecker.h"


class PrimeCheckerTesting : public testing::Test
{
public:
	PrimeChecker primechecker;
};

TEST_F(PrimeCheckerTesting, TestIfOneOrZeroIsAPrimeNumber) {
	ASSERT_FALSE(primechecker.is_prime_number(0));
	ASSERT_FALSE(primechecker.is_prime_number(1));
}