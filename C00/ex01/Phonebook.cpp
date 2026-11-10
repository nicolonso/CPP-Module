/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:14:40 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/10 20:33:54 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

Phonebook::Phonebook()	: count(0) {} // Review later this Initialization

void Phonebook::addContact()
{
	std::string first, last, nick, ph, secret;

	std::cout << "First name: ";
	std::cin >> first;
	std::cout << "Last name: ";
	std::cin >> last;
	std::cout << "Nickname: ";
	std::cin >> nick;
	std::cout << "Phone number: ";
	std::cin >> ph;
	std::cout << "Dark secret: ";
	std::cin >> secret;

	int index = count % 8;
	contact[index].set(first,last, nick, ph, secret);
	if (count < 8)
		count++;
}

static void printField(const std::string &str) // Why in this scenario I nee to use the &
{
	if (str.length() > 10)
		std::cout << "|" << str.substr(0,9) << ".";
	else
		std::cout<< "|" << std::right << std::setw(10) << str;
}

void Phonebook::search() const
{
	if (count == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return ;
	}

}
