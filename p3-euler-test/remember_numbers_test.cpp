#include "pch.h"

#include "../p3-euler/src/RememberNumbers.h"

class RememberNumbersCheckerInt : public testing::Test
{
public:
	RememberNumbers<int,int> remembersnumbers_intint;
};


TEST_F(RememberNumbersCheckerInt, EmptyClassHasNoNumberSaved) {
	ASSERT_FALSE(remembersnumbers_intint.number_has_been_saved(0));
}



