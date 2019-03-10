#include "pch.h"

#include "../p3-euler/src/RememberNumbers.h"

class RememberNumbersCheckerInt : public testing::Test
{
public:
	RememberNumbers<int,int> remembersnumbers_intint;
};


TEST_F(RememberNumbersCheckerInt, TestIfOneOrZeroIsAPrimeNumber) {
	//ASSERT_FALSE(primechecker.is_prime_number(0));
}



