#pragma once


#include <cmath>

#include "RememberNumbers.h"


class PrimeChecker
{
public:
	bool is_prime_number(unsigned long long number) const
	{
		if (number <= 3) return numbers_until_three(number);

		return is_a_prime_higher_three(number);
	}


private:
	RememberNumbers<unsigned long long, bool> remember_prime_numbers;


	bool is_divisable(unsigned long long number, unsigned long long divisor) const
	{
		return (number % divisor) == 0;
	}

	bool numbers_until_three(unsigned long long number) const
	{
		if (number == 2 || number == 3) return true;

		return false;
	}


	bool is_a_prime_higher_three(unsigned long long number) const
	{
		unsigned long long upper = get_upper_limit(number);

		for (unsigned long long i = 2; i <= upper; ++i)
		{
			if (is_divisable(number, i)) return false;
		}

		return true;
	}

	unsigned long long get_upper_limit(unsigned long long number) const
	{
		return static_cast<unsigned long long>( std::sqrt(number) + 1);
	}




};



