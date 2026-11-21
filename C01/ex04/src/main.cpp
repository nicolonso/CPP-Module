/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 14:07:15 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/21 14:27:31 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "Input error" << std::endl, 1);
	
	std::string nameReplace((const char *)av[1]);
	std::ifstream	file(av[1]);

	if (!file)
		return (std::cerr << "File error" << std::endl, 1);
	
	
	return 0;
}