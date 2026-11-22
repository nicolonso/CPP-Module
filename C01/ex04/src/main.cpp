/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalfonso <nalfonso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 14:07:15 by nalfonso          #+#    #+#             */
/*   Updated: 2026/11/22 13:41:03 by nalfonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>

int read_and_replace(std::string &file_replace, const std::string& s1,const std::string& s2)
{
	if (s1.empty())
		return (1);

	std::string	result;
	std::string::size_type pos = 0;
	std::string::size_type found;

	while ((found = file_replace.find(s1, pos)) != std::string::npos)
	{
		result += file_replace.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
	}
	result += file_replace.substr(pos);
	file_replace = result;
	return (0);
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
	
	if (s1.empty())
		return (std::cerr << "Invalid argument" << std::endl, 1);

	if (!file)
		return (std::cerr << "File error" << std::endl, 1);

	if (!file.is_open())
		return (std::cerr << "Failed to open the file" << std::endl, 1);
	
	buffer << file.rdbuf();
	
	std::string contents = buffer.str();
	
	if (read_and_replace( contents , s1 , s2))
		return (std::cerr << "Invalid search string" << std::endl, 1);

	std::ofstream output((nameReplace + ".replace").c_str());

	if (!output)
		return (std::cerr << "Failed to open output file" << std::endl, 1);
	output << contents;
	
	file.close();
	output.close();

	return 0;
}

