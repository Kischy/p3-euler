#include "pch.h"

#include "../p3-euler/src/RememberNumbers.h"

class RememberNumbersCheckerInt : public testing::Test
{
public:
	RememberNumbers<int, int> remembersnumbers_intint;
};

class RememberNumbersCheckerLongLongBool : public testing::Test
{
public:
	RememberNumbers<long long, bool> remembersnumbers_longlong_bool;
};


TEST_F(RememberNumbersCheckerInt, EmptyClassHasNoNumberSaved) {
	ASSERT_FALSE(remembersnumbers_intint.number_has_been_saved(0));
}

TEST_F(RememberNumbersCheckerLongLongBool, NumberHasBeenSaved) {

	remembersnumbers_longlong_bool.save_number(1, true);
	ASSERT_TRUE(remembersnumbers_longlong_bool.number_has_been_saved(1));
	ASSERT_FALSE(remembersnumbers_longlong_bool.number_has_been_saved(2));
}

TEST_F(RememberNumbersCheckerInt, GetsSavedNumber) {

	remembersnumbers_intint.save_number(-10, -2000);
	ASSERT_EQ(remembersnumbers_intint.get_number(-10), -2000);
}

TEST_F(RememberNumbersCheckerInt, ThrowsOutOfRangeExceptionWhenElementWasNotFoundOnGetCall) {
	ASSERT_THROW(remembersnumbers_intint.get_number(1), std::out_of_range);
}







