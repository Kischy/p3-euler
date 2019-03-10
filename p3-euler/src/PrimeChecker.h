#pragma once


class PrimeChecker
{
public:
	bool is_prime_number(unsigned long long number) const
	{
		if (number <= 3) return numbers_until_three(number);


		return false;
	}


private:
	inline bool is_divisable(unsigned long long number, unsigned long long divisor) const
	{
		return (number % divisor) == 0;
	}

	inline bool numbers_until_three(unsigned long long number) const
	{
		if (number == 2 || number == 3) return true;

		return false;
	}

};



