# include "classPhoneBook.hpp"

using std::getline;
using std::cin;
using std::cout;

void	PhoneBook::ft_add()
{
	string input;

	this->num++;
	cout << "✅\nenter first_name" << std::endl;
	getline(cin, input);
	this->contact[num].ft_first_name(input);
	cout << "✅\nenter last_name" << std::endl;
	getline(cin, input);
	this->contact[num].ft_last_name(input);
	cout << "✅\nenter nickname" << std::endl;
	getline(cin, input);
	this->contact[num].ft_nickname(input);
	cout << "✅\nenter login" << std::endl;
	getline(cin, input);
	this->contact[num].ft_login(input);
	cout << "✅\nenter postal_address" << std::endl;
	getline(cin, input);
	this->contact[num].ft_postal_address(input);
	cout << "✅\nenter email_address" << std::endl;
	getline(cin, input);
	this->contact[num].ft_email_address(input);
	cout << "✅\nenter phone_number" << std::endl;
	getline(cin, input);
	this->contact[num].ft_phone_number(input);
	cout << "✅\nenter birthday_date" << std::endl;
	getline(cin, input);
	this->contact[num].ft_birthday_date(input);
	cout << "✅\nenter favorite_meal" << std::endl;
	getline(cin, input);
	this->contact[num].ft_favorite_meal(input);
	cout << "✅\nenter underwear_color" << std::endl;
	getline(cin, input);
	this->contact[num].ft_underwear_color(input);
	cout << "✅\nenter darkest_secret" << std::endl;
	getline(cin, input);
	this->contact[num].ft_darkest_secret(input);
	cout << "✅\n" << std::endl;
}

void	PhoneBook::ft_search()
{
	int	i;
	int index;

	i = -1;
	cout << std::setw(10);
	cout << std::setw(10) <<  "index" << '|';
	cout << std::setw(10) <<  "first name" << '|';
	cout << std::setw(10) <<  "last name" << '|';
	cout << std::setw(10) <<  "nickname" << '|' << std::endl;
	while (++i <= this->num)
	{
		cout << std::setw(10) <<  i << '|';
		this->contact[i].ft_print_credential();
		cout << std::endl;
	}
	cout << "\033[0;37m enter index for more information\033[0m" << std::endl;
	cin >> index;
	if (index > this->num || index < 0)
		cout << "stop joking 🤬";
	else
		contact[index].ft_list_info();
}
