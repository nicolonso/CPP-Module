/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:03:33 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/16 20:26:42 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int main()
{
	std::string input;
	PhoneBook pb;
	
	while (1)
	{
		std::cout << "---------------|  COMMANDS  |---------------" << std::endl;
		std::cout << "|     ADD      |  SEARCH    |     EXIT     |" << std::endl;
		std::cout << "> ";
		if (!(std::getline(std::cin, input)))
			break ;
	
		if (input == "ADD")
			pb.addContact();
		else if (input == "SEARCH")
			pb.search();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Unknown command\n";
	}
	return (0);
}
