#include <iostream>

#include "Factorize.h"



int main(int argc, char **argv)
{

	unsigned long long p3_answer = 0;
	
	Factorize factorize;
	
	std::vector<unsigned long long>	prime_factors = factorize.factorize(600851475143);
	//std::vector<unsigned long long>	prime_factors = factorize.factorize(9008521475814309897);
	//std::vector<unsigned long long>	prime_factors = factorize.factorize(1);


	for (auto prime : prime_factors)
	{
		if (prime > p3_answer) p3_answer = prime;

		std::cout << prime << "\t";
	}

	std::cout << "\n";
	std::cout << "The answer to the third problem of ProjectEuler.net is: " << p3_answer << std::endl;



	return 0;
}

