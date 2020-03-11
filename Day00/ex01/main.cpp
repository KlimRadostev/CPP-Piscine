// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/16 11:01:01 by kradoste          #+#    #+#             //
//   Updated: 2019/07/16 22:48:11 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

Contact	get_new_contact(void)
{
    Contact     contact;
	std::string buff;

	std::cout << "First Name: ";
	std::cin >> buff;
    contact.set_first_name(buff);
	std::cout << "Last Name: ";
	std::cin >> buff;
    contact.set_last_name(buff);
	std::cout << "Nickname: ";
	std::cin >> buff;
    contact.set_nick_name(buff);
	std::cout << "Login: ";
	std::cin >> buff;
    contact.set_login(buff);
	std::cout << "Address: ";
	std::cin >> buff;
	contact.set_address(buff);
	std::cout << "Email: ";
	std::cin >> buff;
    contact.set_email(buff);
	std::cout << "Phone: ";
	std::cin >> buff;
    contact.set_phone(buff);
	std::cout << "Birthday: ";
	std::cin >> buff;
    contact.set_birthday(buff);
	std::cout << "Favorite Meal: ";
	std::cin >> buff;
    contact.set_favorite_meal(buff);
	std::cout << "Underwear Color: ";
	std::cin >> buff;
    contact.set_underwear_color(buff);
	std::cout << "Darkest_Secret: ";
	std::cin >> buff;
    contact.set_darkest_secret(buff);
	return (contact);
}

void	print_contact(Contact contacts[], int i)
{
	int	index;

	std::cout << "Enter index to get contact's data" << std::endl;
	std::cin >> index;
	if (index >= 0 && index < i)
	{
		std::cout << contacts[index].get_first_name() << std::endl;
		std::cout << contacts[index].get_last_name() << std::endl;
		std::cout << contacts[index].get_nick_name() << std::endl;
		std::cout << contacts[index].get_login() << std::endl;
		std::cout << contacts[index].get_address() << std::endl;
		std::cout << contacts[index].get_email() << std::endl;
		std::cout << contacts[index].get_phone() << std::endl;
		std::cout << contacts[index].get_birthday() << std::endl;
		std::cout << contacts[index].get_favorite_meal() << std::endl;
		std::cout << contacts[index].get_underwear_color() << std::endl;
		std::cout << contacts[index].get_darkest_secret() << std::endl;
	}
	else
		std::cout << "wrong index\n";
}

void	parse_book(std::string str)
{
	if (str.size() > 10)
	{
		for (int j = 0; j < 9; j++)
			std::cout << str[j];
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";
}

void	phonebook(Contact contacts[], int i)
{
	std::string	tmp;

	std::cout << "|   INDEX  |FIRST NAME|LAST NAME | NICKNAME |" << std::endl;
	for (int j = 0; j < i; j++)
	{
		std::cout << std::left << "|" << std::setw(10) << j << "|";
		tmp = contacts[j].get_first_name();
		parse_book(tmp);
		tmp = contacts[j].get_last_name();
		parse_book(tmp);
		tmp = contacts[j].get_nick_name();
		parse_book(tmp);
		std::cout << std::endl;
	}
	print_contact(contacts, i);
}

int 	main()
{
	std::string input;
	Contact		contacts[8];
	int			i;

	i = 0;
	while (1)
	{
		getline(std::cin, input, '\n');
		if (input == "ADD")
		{
			if (i < 8)
				contacts[i++] = get_new_contact();
			else
				std::cout << "CANT INPUT MORE CONTACTS\n";
		}
		else if (input == "SEARCH")
		{
			if (i > 0)
				phonebook(contacts, i);
			else
				std::cout << "No Contacts Available" << std::endl;
		}
		else if (input == "EXIT")
			break ;
	}
	return (0);
}
