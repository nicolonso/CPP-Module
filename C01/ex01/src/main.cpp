/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 23:04:37 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/18 22:19:39 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{	
	Zombie *Horde = zombieHorde(10, "Frankenstain");

	if (!Horde)
		return (1);

	for (int i = 0; i < 10; i++)
		Horde[i].announce();

	delete[] Horde;
	
	return (0);
}
