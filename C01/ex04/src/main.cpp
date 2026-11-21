/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 14:07:15 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/21 22:50:21 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>


void read_and_replace(std::string &file_replace, const std::string s1,const std::string s2)
{
	std::string		result;
	bool	found = true;

	if (s1.empty())
		return ;

	for (size_t i = 0; i <= file_replace.length() - s1.length(); i++)
	{
		if (found)
		{
			for (size_t j = 0 ;file_replace[i + j]; j++)
			{
				if (file_replace[i + j] != s1[j])
				{
					found = false;
					break;
				}				
			}
		}

		if (found)
		{
			result += s2;
			i += s1.length();
		}
		else
		{
			result += file_replace[i];
			i++;
		}
		file_replace = result;
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "Input error" << std::endl, 1);
	
	std::string nameReplace((const char *)av[1]);
	std::ifstream	file(av[1]);
	std::stringstream	buffer;

	std::string s1 = av[2];
	std::string s2 = av[3];
	
	// std::cout << s1 << std::endl;
	// std::cout << s2 << std::endl;
	
	if (!file)
		return (std::cerr << "File error" << std::endl, 1);

	if (!file.is_open())
		return (std::cerr << "Failed to open the file" << std::endl, 1);
	
	buffer << file.rdbuf();
	
	nameReplace = buffer.str();
	
	std::cout << nameReplace << std::endl;

	read_and_replace( nameReplace , s1, s2);

	std::cout << nameReplace << std::endl;

	file.close(); //What happend if i dont include this?? Because it doesn't include any leaks

	return 0;
}

