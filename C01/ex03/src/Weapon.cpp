/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 19:53:41 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/21 19:46:46 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) { }

Weapon::~Weapon() {}

const std::string& Weapon::getType() const
{
	return (this->_type);
}

void Weapon::setType(std::string newType)
{
	this->_type = newType;
}
