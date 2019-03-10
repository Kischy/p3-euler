#pragma once

#include <vector>
#include "PrimeChecker.h"

class Factorize
{
public:

	std::vector<unsigned long long> factorize(unsigned long long number) 
	{
		intern_factors.clear();

		factor_to_intern_vector(number);

		return intern_factors;
	}



private:
	PrimeChecker primechecker;

	std::vector<unsigned long long> intern_factors;

	void factor_to_intern_vector(unsigned long long number)
	{
		for (unsigned long long i = 2; i <= number; ++i)
		{
			if (primechecker.is_prime_number(i) == true)
			{
				if (is_divisable(number, i) == true)
				{
					intern_factors.push_back(i);
					number /= i;
				}
			}
		}
		
	}


	bool is_divisable(unsigned long long number, unsigned long long divisor)
	{
		return (number % divisor) == 0;
	}



};

