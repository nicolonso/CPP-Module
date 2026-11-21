/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 19:53:41 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/21 13:47:47 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"


Weapon::Weapon() {}

Weapon::Weapon(std::string type) : _type(type) { }

Weapon::~Weapon() {}

const std::string& Weapon::getType()
{
	return (this->_type);
}

void Weapon::setType(std::string newType)
{
	this->_type = newType;
}
