# include "classContact.hpp"

# include <iostream>
# include <iomanip>
# include <string>

void	Contact::ft_first_name(string str)
{
	this->first_name = str;
}

void	Contact::ft_last_name(string str)
{
	this->last_name = str;
}

void	Contact::ft_nickname(string str)
{
	this->nickname = str;
}

void	Contact::ft_login(string str)
{
	this->login = str;
}

void	Contact::ft_postal_address(string str)
{
	this->postal_address = str;
}

void	Contact::ft_email_address(string str)
{
	this->email_address = str;
}

void	Contact::ft_phone_number(string str)
{
	this->phone_number = str;
}

void	Contact::ft_birthday_date(string str)
{
	this->birthday_date = str;
}

void	Contact::ft_favorite_meal(string str)
{
	this->favorite_meal = str;
}

void	Contact::ft_underwear_color(string str)
{
	this->underwear_color = str;
}

void	Contact::ft_darkest_secret(string str)
{
	this->darkest_secret = str;
}

void	Contact::ft_print_sub(string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << '.' << '|';
	else
		std::cout << std::setw(10) << str << '|';
}

void	Contact::ft_print_credential()
{
	ft_print_sub(this->first_name);
	ft_print_sub(this->last_name);
	ft_print_sub(this->nickname);
}

void	Contact::ft_list_info()
{
	std::cout << "His first_name" << std::endl
				<< this->first_name << std::endl
				<< "His last_name" << std::endl
				<< this->last_name << std::endl
				<< "His nickname" << std::endl
				<< this->nickname << std::endl
				<< "His login" << std::endl
				<< this->login << std::endl
				<< "His postal_address" << std::endl
				<< this->postal_address << std::endl
				<< "His email_address" << std::endl
				<< this->email_address << std::endl
				<< "His phone_number" << std::endl
				<< this->phone_number << std::endl
				<< "His birthday_date" << std::endl
				<< this->birthday_date << std::endl
				<< "His favorite_meal" << std::endl
				<< this->favorite_meal << std::endl
				<< "His underwear_color" << std::endl
				<< this->underwear_color << std::endl
				<< "His darkest_secret" << std::endl
				<< this->darkest_secret << std::endl;
}
