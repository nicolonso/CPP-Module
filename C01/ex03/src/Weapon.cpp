/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 19:53:41 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/19 20:19:48 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::~Weapon() {}

const std::string& getType(const std::string X)
{
	std::string& type = X;

	return (type);
}

void Weapon::setType(const std::string& newType)
{
	type = newType;
}