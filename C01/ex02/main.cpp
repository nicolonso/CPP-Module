/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 22:38:22 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/19 19:00:34 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main()
{
	std::string string		= "HI THIS IS BRAIN";
	std::string *stringPTR	= &string;
	std::string &stringREF 	= string;

	std::cout << "Memory address of the string: " << &string << std::endl;
	std::cout << "Memory address of the stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of the stringREF: "<< &stringREF << std::endl << std::endl;

	std::cout << "Value of the string: " << string << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: "<< stringREF << std::endl << std::endl;

	return (0);
}
