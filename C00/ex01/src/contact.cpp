/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 23:25:49 by nalfonso          #+#    #+#             */
/*   Updated: 2026/07/03 21:38:11 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact.hpp"

void Contact::set(std::string first, std::string last, std::string nick, std::string ph, std::string secret)
{
	firstName	= first;
	lastName	= last;
	nickname	= nick;
	phone		= ph;
	darkSecret	= secret;
}

std::string Contact::getFirstName() const	{ return firstName; }
std::string Contact::getLastName() const	{ return lastName; }
std::string Contact::getNickName() const	{ return nickname; }
std::string Contact::getPhone() const		{ return phone; }
std::string Contact::getDarkSecret() const	{ return darkSecret; } 