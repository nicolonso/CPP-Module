/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:14:40 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/15 23:00:37 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

PhoneBook::PhoneBook()	: count(0) {} // Review later this Initialization

static int input_verification(std::string &str, std::string prompt)
{
	std::string input;
	bool		checker = true;
	
	while (checker)
	{
		if (!(std::getline(std::cin, input)) )
			return (1);
		if (input.empty())
		{
			std::cout << "Incorrect input try again." << std::endl;
			std::cout << prompt;
			checker = true;
		}
		else
			checker = false;
	}
	str = input;
	return (0);
}

void PhoneBook::addContact()
{
	std::string first, last, nick, ph, secret;
	int index = 0;

	std::cout << "First name: ";
	if (input_verification(first, "First name: ") == 1)
		return ;
	std::cout << "Last name: ";
	if (input_verification(last, "Last name: ") == 1)
		return ;
	std::cout << "Nickname: ";
	if (input_verification(nick, "Nickname: ") == 1)
		return ;
	std::cout << "Phone number: ";
	if (input_verification(ph, "Phone number: ") == 1)
		return ;
	std::cout << "Dark secret: ";
	if (input_verification(secret, "Dark secret: ") == 1)
		return ;

	contact[index].set(first,last, nick, ph, secret);
	if (count < 8)
		count++;
	index = (count + 1) % 8;
}

static void printField(const std::string &str) // Why in this scenario I nee to use the &
{
	if (str.length() > 10)
		std::cout << "|" << str.substr(0,9) << ".";
	else
		std::cout<< "|" << std::right << std::setw(10) << str;
}


void PhoneBook::helper() const
{
	std::string input;
	int			index;

	std::cout << "Enter index: ";
	if (!(std::getline(std::cin, input)))
		return ;
	std::stringstream ss(input);
	
	if (!(ss >> index) || index < 0 || index >= count)
	{
		std::cout << "Invalid index: " << std::endl;
		return ;
	}

	std::cout << "First name    : " << contact[index].getFirstName() << std::endl;
	std::cout << "Last name     : " << contact[index].getLastName() << std::endl;
	std::cout << "Nick name     : " << contact[index].getNickName() << std::endl;
	std::cout << "Phone number  : " << contact[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact[index].getDarkSecret() << std::endl;
}

void PhoneBook::search() const
{
	if (count == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return ;
	}
	std::cout << "|   Index  |First Name| Last name| Nickname |" << std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout << "|" << std::right << std::setw(10) << i;
		printField(contact[i].getFirstName());
		printField(contact[i].getLastName());
		printField(contact[i].getNickName());
		std::cout << "|" << std::endl;
	}
	helper();
}

