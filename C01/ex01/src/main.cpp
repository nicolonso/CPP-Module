/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 23:04:37 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/18 01:20:59 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Frankenstain");
	
	randomChump("Zombie Nicolas");
	zombie->announce();
	
	delete zombie;
	
	Zombie *Horde = zombieHorde(10, "Godzila");

	delete[] Horde;
	
	return (0);
}
