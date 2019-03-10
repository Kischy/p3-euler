#pragma once


namespace helper
{
	bool is_divisable(unsigned long long number, unsigned long long divisor)
	{
		return (number % divisor) == 0;
	}

}