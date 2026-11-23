/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 14:05:26 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/23 22:47:34 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl() { }

Harl::~Harl() { }

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
 
void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
 
void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}
 
void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
} 

void	Harl::complain(std::string level)
{
	int i = 0;

	std::string	levels[4] = {
		"DEBUG" ,"INFO", "WARNING","ERROR"
	};

	while (i < 4 && levels[i].compare(level))
		i++;
	
	switch (i)
	{
		case 0:
			this->debug();
			/* fall through */
		case 1:
			this->info();
			/* fall through */
		case 2:
			this->warning();
			/* fall through */
		case 3:
		{
			this->error();
			break ;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
