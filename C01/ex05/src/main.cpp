/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 14:04:32 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/23 22:25:41 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main( void )
{
	Harl test;

	test.complain("DEBUG");
	std::cout << std::endl;
	test.complain("INFO");
	std::cout << std::endl;
	test.complain("WARNING");
	std::cout << std::endl;
	test.complain("ERROR");
	std::cout << std::endl;
	test.complain("TEST");

	return (0);
}
