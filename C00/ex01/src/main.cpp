/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 23:26:06 by nalfonso          #+#    #+#             */
/*   Updated: 2026/07/02 22:36:21 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

int main()
{
	std:: string input;
	Phonebook	pb;

	while(1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		
		if (input == "ADD")
			pb.addContact();
		else if (input == "SEARCH")
			pb.search();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Unknown command\n";
	}
	return 0;
}
