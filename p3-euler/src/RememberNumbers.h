#pragma once

#include "IRememberNumbers.h"

#include <unordered_map>

template <typename T_key, typename T_value>
class RememberNumbers : public IRememberNumbers<typename T_key, typename T_value>
{
public:

	void save_number(T_key num_key, T_value num_value)
	{
		saved_numbers.insert({ num_key,num_value });
	}

	T_value get_number(T_key num_key) const override
	{
		throw_out_of_range_on_empty_iterator(num_key);

		auto it = saved_numbers.find(num_key);
		return it->second;
	}

	bool number_has_been_saved(T_key num_key) const override
	{
		auto it = saved_numbers.find(num_key);

		return it == saved_numbers.end() ? false : true;
	}


private:
	std::unordered_map<T_key, T_value> saved_numbers;


	void throw_out_of_range_on_empty_iterator(T_key num_key) const
	{
		if (number_has_been_saved(num_key) == false)
		{
			throw std::out_of_range("Element is not part of the unordered_map.");
		}
	}


};

