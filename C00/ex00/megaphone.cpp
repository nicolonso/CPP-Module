/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 16:16:28 by nalfonso          #+#    #+#             */
/*   Updated: 2026/06/28 16:18:03 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>


int main(int ac, char **av)
{
	if (ac == 1) 
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			char c = av[i][j];
			if (c >= 'a' && c <= 'z')
				c -= 32;
			std::cout << c;
		}
	}
	std::cout << std::endl;
	return 0;
}

// Logic 

// If the # of arguments is equal to 0. I need to return 
// * LOUD AND UNBEARABLE FEEDBACK NOISE *

// It doesnt matter th number of arguments i have i need to print all in upper case
// Forthis step ican create a function that allow me to make this 

/*
--------------------------------------------------------------------------

	Note *Missing makefile*
	
	Implematation of for loop -> Why -> 
*/