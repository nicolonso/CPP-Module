/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 18:10:55 by nalfonso          #+#    #+#             */
/*   Updated: 2026/07/12 15:51:43 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()	: count(0) {}

void PhoneBook::addContact()
{
	std::string first, last, nick, ph, secret;

	std::cout << "First name: ";
	std::cin >> first;
	//std::getline(std::cin, first);
	std::cout << "Last Name: ";
	std::cin >> last;
	//std::getline(std::cin, last);
	std::cout << "Nick name: ";
	std::cin >> nick;
	//std::getline(std::cin, nick);
	std::cout << "Phone number: ";
	std::cin >> ph;
	//std::getline(std::cin, ph);
	std::cout << "Darkest secret: ";
	std::cin >> secret;
	//std::getline(std::cin, secret);

	int index =  count % 8;
	contacts[index].set(first, last, nick, ph, secret);
	if (count < 8)
		count++;
}

//std::cout << std::right << std::setw(10) << "hello";

// I need implement setw helper

static void printField(const std::string &str)
{
	if (str.length() > 10)
		std::cout << "|" << str.substr(0, 9) << ".";
	else
		std::cout << "|" << std::right << std::setw(10) << str;
}

void PhoneBook::search() const
{
	if (count == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return ;
	}
	std::cout << "|   index  |First Name| Last name| Nickname |" << std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout << "|" << std::right << std::setw(10) << i;
		printField(contacts[i].getFirstName());
		printField(contacts[i].getLastName());
		printField(contacts[i].getNickName());
		std::cout << "|" << std::endl;
	}
	std::string input;
	int			index;
	
	std::cout << "Enter index: ";
	std::cin >> input;
	//std::getline(std::cin, input);
	std::stringstream ss(input);
	if (!(ss >> index) ||  index < 0 || index >= count)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}

	std::cout << "First name	: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last name	    : " << contacts[index].getLastName() << std::endl;
	std::cout << "Nick name	    : " << contacts[index].getNickName() << std::endl;
	std::cout << "Phone number	: " << contacts[index].getPhone() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].getDarkSecret() << std::endl;
}

