/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 20:44:52 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/21 13:51:40 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon) , _name(name){ }

HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << this->_name + " attacks with their " + this->_weapon.getType() << std::endl;
}
