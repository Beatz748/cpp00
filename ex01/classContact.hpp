#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

using std::string;

class Contact
{
	private:
		string	first_name;
		string	last_name;
		string	nickname;
		string	login;
		string	postal_address;
		string	email_address;
		string	phone_number;
		string	birthday_date;
		string	favorite_meal;
		string	underwear_color;
		string	darkest_secret;
	public:
		void	ft_first_name(string str);
		void	ft_last_name(string str);
		void	ft_nickname(string str);
		void	ft_login(string str);
		void	ft_postal_address(string str);
		void	ft_email_address(string str);
		void	ft_phone_number(string str);
		void	ft_birthday_date(string str);
		void	ft_favorite_meal(string str);
		void	ft_underwear_color(string str);
		void	ft_darkest_secret(string str);
		void	ft_print_credential();
		void	ft_print_sub(string str);
		void	ft_list_info();
};

#endif
