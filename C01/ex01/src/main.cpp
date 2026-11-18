/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 23:04:37 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/18 22:30:35 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	int N = 20;

	Zombie *Horde = zombieHorde( N, "Frankenstain");

	if (!Horde)
		return (1);

	for (int i = 0; i < N; i++)
	{
		std::cout << i << ": ";
		Horde[i].announce();
	}

	delete[] Horde;
	
	return (0);
}
