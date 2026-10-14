/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 16:16:28 by nalfonso          #+#    #+#             */
/*   Updated: 2026/10/14 19:30:27 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cctype>

int main(int ac, char **av)
{
	if (ac == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);

	for (int i = 1; i < ac; i++)
	{
		std::string message = av[i];

		for (std::string::size_type j = 0; j < message.length(); j++)
			message[j] = static_cast<char>(std::toupper(static_cast<unsigned char>(message[j])));
		
		std::cout << message;
	}
	
	std::cout << std::endl;
	
	return (0);
}
