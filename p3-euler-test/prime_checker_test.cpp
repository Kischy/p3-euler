#include "pch.h"

#include "../p3-euler/src/PrimeChecker.h"


public PrimeCheckerTesting : public testing::Test
{
	PrimeChecker primechecker;
};

TEST_F(PrimeCheckerTesting, TestIfOneIsAPrimeNumber) {
	ASSERT_TRUE(primechecker.is_prime_number(0));
}