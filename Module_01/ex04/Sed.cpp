/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:37:54 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/18 19:41:48 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	Sed::SetParams(char **av)
{
	this->filename = std::string(av[1]);
	this->instr = std::string(av[2]);
	this->tostr = std::string(av[3]);
}

bool	Sed::RecordToFile(std::string line)
{
	std::ofstream	fout;

	fout.open(filename + ".replace", std::ofstream::app);
	if (fout.is_open())
	{
		fout << line << std::endl;
		fout.close();
		return true;
	}
	else
		std::cout << "Cannot open output file!" << std::endl;
	return false;
}

void	Sed::Replace(std::ifstream *fin)
{
	std::string	line;
	std::size_t found;
	std::size_t pos;

	while(!fin->eof())
	{
		line = "";
		std::getline(*fin, line);
		pos = 0;
		found = line.find(instr);
		while (found != std::string::npos)
		{
			line = line.substr(0, found) + tostr + line.substr(found + instr.length());
			pos = found + tostr.length();
			found = line.find(instr, pos);
		}
		if (!RecordToFile(line))
			break;
	}
}