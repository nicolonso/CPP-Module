/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 13:37:06 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/21 16:39:01 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_weapon = NULL;
	this->_name = name;
}

HumanB::~HumanB() { }

void	HumanB::setWeapon(Weapon *weapon)
{
	_weapon = weapon;
}

void	HumanB::attack()
{
	std::cout << this->_name + " attacks with their " + this->_weapon.getType() << std::endl;
}
