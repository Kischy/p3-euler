#include "pch.h"

#include "../p3-euler/src/helping_functions.h"



TEST(Helper_IsDivisableTest, CheckIsDivisableFunction) {
	
	ASSERT_TRUE(helper::is_divisable(4, 2));
	ASSERT_FALSE(helper::is_divisable(5, 3));
}


