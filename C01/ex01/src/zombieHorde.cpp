/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 00:59:05 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/18 22:12:30 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zombiesH;

	if (N <= 0)
		return (NULL);
	
	zombiesH = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		zombiesH[i].set_name( name );
		
	return zombiesH;
}
