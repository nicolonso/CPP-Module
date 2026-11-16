/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 18:37:05 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/16 21:03:26 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

void Contact::set(std::string	firstN, std::string	lname, std::string nickN,
					std::string pN, std::string darkS)
{
	firstName = firstN;
	lastName = lname;
	nickName = nickN;
	phoneNumber = pN;
	darkSecret = darkS;
}

std::string Contact::getFirstName() const { return firstName; }
std::string Contact::getLastName() const { return lastName; }
std::string Contact::getNickName() const { return nickName; }
std::string Contact::getPhoneNumber() const {return phoneNumber; }
std::string Contact::getDarkSecret() const {return darkSecret; }