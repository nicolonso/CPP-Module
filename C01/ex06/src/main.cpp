/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 14:04:32 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/23 22:31:57 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main( int ac, char **av )
{
	Harl test;

	if (ac != 2)
		return (std::cerr << "Error in input" << std::endl, 1);
	test.complain(av[1]);
	
	return (0);
}
