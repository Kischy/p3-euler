#pragma once



template <typename T_key, typename T_value>
class IRememberNumbers
{
public:

	virtual ~IRememberNumbers() {}

	//virtual void save_number(T_key num_key, T_value num_value) = 0;
	//virtual T_value get_number(T_key num_key) const = 0;
	virtual bool number_has_been_saved(T_key num_key) const = 0;

};

