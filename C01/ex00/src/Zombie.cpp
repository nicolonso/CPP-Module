/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 23:17:19 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/18 00:53:57 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) { std::cout << _name << " is created."<< std::endl; }
Zombie::~Zombie() { std::cout << _name << " is destroyed."<< std::endl; }

void Zombie::announce( void )
{
	std::cout << _name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
