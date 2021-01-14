#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

# include <string>
# include "classContact.hpp"
# include <iostream>
# include <iomanip>

using std::string;

class PhoneBook
{
	private:
		int		num;
		Contact	contact[8];
	public:
				PhoneBook(){num = -1;};
		void	ft_add();
		void	ft_search();
};

#endif
