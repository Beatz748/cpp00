# include "classPhoneBook.hpp"
# include "classContact.hpp"

int	main()
{
	PhoneBook	book;
	string		input;

	while (42)
	{
		std::cout << "ENTER : \033[0;32mSEARCH | \033[0;33mADD";
		std::cout << " | \033[0;35mEXIT |\033[0m" << std::endl << std::endl;
		std::cin >> input;
		if (!(input.compare("ADD")))
			book.ft_add();
		else if (!(input.compare("SEARCH")))
			book.ft_search();
		else if (!(input.compare("EXIT")))
			break;
		else
			std::cout << "\033[33m\nlol ar u ok?\033[0m💩\n" << std::endl;
	}
}
