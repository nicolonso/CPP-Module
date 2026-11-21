/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 13:37:06 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/21 19:39:55 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_weapon = NULL;
	this->_name = name;
}

HumanB::~HumanB() { }

void	HumanB::setWeapon(Weapon& type)
{
	this->_weapon = &type;
}

void	HumanB::attack()
{
	if (this->_weapon)
		std::cout << this->_name + " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << this->_name + " attacks with none" << std::endl;
	
}
