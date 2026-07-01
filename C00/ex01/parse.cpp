/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 18:12:02 by nalfonso          #+#    #+#             */
/*   Updated: 2026/07/01 23:21:06 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

bool ft_strcmp(const std::string& s1, const std::string& s2 )
{
	return s1 == s2;
}


// int parse(const std::string cmd)
// {

// }

/*
-----------------------------------------------------------------------------------

 Is only 3 commands available 	-> *ADD*
										Features:	First name 
													Last Name
													Nickname
													Phone Number
													Darkest Secret
									// Cannot be empty \\
								-> *SEARCH*
										Features:	Display the information in fourth columns
													1. Index
													2. First Name
													3. Last Name
													4. Nick name

													AMount of 10 Charachters
													
								-> *EXIT*
								


*/

int main()
{
	std:: string input;

	while(1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		
		if (input == "ADD")
			std::cout << "Adding..\n";
		else if (input == "SEARCH")
			std::cout << "Searching..\n";
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Unknown command\n";
	}
	return 0;
}
