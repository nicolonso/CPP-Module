/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 23:17:19 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/17 21:53:54 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name): name(name)
{}

void Zombie::announce( void )
{
	std::cout << "Foo: BraiiiiiiinnnzzzZ..." << std::endl;
}
